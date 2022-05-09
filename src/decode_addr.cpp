// See LICENSE for license details.

// Derevived from riscv-isa-sim/fesvr/elfloader.cc

#include "elf.h"
#include "byteorder.h"

#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <assert.h>
#include <unistd.h>
#include <stdlib.h>

#include <stdexcept>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <functional>
#include <iostream>

using reg_t = uint64_t;
using bswap_t = std::function<reg_t(reg_t)>;

template<typename ehdr_t, 
         typename phdr_t, 
         typename shdr_t, 
         typename sym_t, 
         bool endian_is_le>
void load_elf(const char *buf, const size_t size) {

    auto bswap = [](reg_t x) {
        if constexpr (endian_is_le) {
            return from_le(x);
        } else {
            return from_be(x);
        }
    };

    std::vector<uint8_t> zeros;
    std::map<std::string, uint64_t> symbols;

    reg_t* entry;
    const ehdr_t* eh = (const ehdr_t*)buf;                                                 
    const phdr_t* ph = (const phdr_t*)(buf + bswap(eh->e_phoff));                          
    *entry = bswap(eh->e_entry);                                               

    const size_t elf_end_location = bswap(eh->e_phoff) + bswap(eh->e_phnum) * sizeof(*ph);
    if (elf_end_location > size) {
        throw std::invalid_argument("Specified ELF seems to be truncated");
    }
    
    //for (unsigned i = 0; i < bswap(eh->e_phnum); i++) {                        
    //    if (bswap(ph[i].p_type) == PT_LOAD && bswap(ph[i].p_memsz)) {            
    //        if (bswap(ph[i].p_filesz)) {                                           
    //            
    //            const size_t record_end = bswap(ph[i].p_offset) + bswap(ph[i].p_filesz);
    //            if (record_end > size) {
    //                throw std::invalid_argument("Specified ELF seems to have a truncated phdr record.");
    //            }
    //
    //            memif->write(bswap(ph[i].p_paddr), bswap(ph[i].p_filesz),            
    //                         (uint8_t*)buf + bswap(ph[i].p_offset));                 
    //        }                                                                      
    //        if (size_t pad = bswap(ph[i].p_memsz) - bswap(ph[i].p_filesz)) {       
    //            zeros.resize(pad);                                                   
    //            memif->write(bswap(ph[i].p_paddr) + bswap(ph[i].p_filesz), pad,      
    //                         zeros.data());                                          
    //        }                                                                      
    //    }                                                                        
    //}                                                                          
    const shdr_t* sh = (shdr_t*)(buf + bswap(eh->e_shoff));                          

    const size_t shend = bswap(eh->e_shoff) + bswap(eh->e_shnum) * sizeof(*sh);
    if (shend > size) {
        throw std::invalid_argument("Specified ELF seems to have a truncated shdr record.");
    }
    if (bswap(eh->e_shstrndx) >= bswap(eh->e_shnum)) {
        throw std::invalid_argument("Specified ELF seems to have a mismatched shnum.");
    }
    const size_t shrecord_size = (bswap(sh[bswap(eh->e_shstrndx)].sh_offset) +                
                                  bswap(sh[bswap(eh->e_shstrndx)].sh_size));
    if (shrecord_size > size) {
        throw std::invalid_argument("Specified ELF seems to have a mismatched sh record size.");
    }
    const char* shstrtab = buf + bswap(sh[bswap(eh->e_shstrndx)].sh_offset);         
    unsigned strtabidx = 0, symtabidx = 0;                                     
    for (unsigned i = 0; i < bswap(eh->e_shnum); i++) {
        const unsigned max_len =                                                       
            bswap(sh[bswap(eh->e_shstrndx)].sh_size) - bswap(sh[i].sh_name);     
        assert(bswap(sh[i].sh_name) < bswap(sh[bswap(eh->e_shstrndx)].sh_size)); 
        assert(strnlen(shstrtab + bswap(sh[i].sh_name), max_len) < max_len);     
        if (bswap(sh[i].sh_type) & SHT_NOBITS) continue;                         
        assert(size >= bswap(sh[i].sh_offset) + bswap(sh[i].sh_size));           
        if (strcmp(shstrtab + bswap(sh[i].sh_name), ".strtab") == 0)             
            strtabidx = i;                                                         
        if (strcmp(shstrtab + bswap(sh[i].sh_name), ".symtab") == 0)             
            symtabidx = i;                                                         
    }                                                                          
    if (strtabidx && symtabidx) {                                              
        const char* strtab = buf + bswap(sh[strtabidx].sh_offset);                     
        const sym_t* sym = (const sym_t*)(buf + bswap(sh[symtabidx].sh_offset));             
        for (unsigned i = 0; i < bswap(sh[symtabidx].sh_size) / sizeof(sym_t);   
             i++) {                                                              
            const unsigned max_len =                                                     
                bswap(sh[strtabidx].sh_size) - bswap(sym[i].st_name);              
            assert(bswap(sym[i].st_name) < bswap(sh[strtabidx].sh_size));          
            assert(strnlen(strtab + bswap(sym[i].st_name), max_len) < max_len);    
            symbols[strtab + bswap(sym[i].st_name)] = bswap(sym[i].st_value);      
        }                                                                        
    }                                                                          
} 

int main(int argc, char **argv)
{
    if (argc != 3) {
        std::cerr << "USAGE: " << argv[0] << " <elf file> <output prefix>\n";
        return -1;
    }
    const char *elf_file = argv[1];
    const char *output_prefix = argv[2];

    int fd = open(elf_file, O_RDONLY);
    if (fd == -1) {
        std::cerr << "ERROR: Could not open() " << elf_file 
                  << " for reading: " << strerror(errno) << "\n";
        return -1;
    }
    struct stat s;
    if (fstat(fd, &s) < 0) {
        std::cerr << "ERROR: Could not fstat() " << elf_file 
                  << "to find file size: " << strerror(errno) << "\n";
        return -1;
    }
    const size_t size = s.st_size;
    if (size < sizeof(Elf64_Ehdr)) {
        std::cerr << "ERROR: File " << elf_file << "is too small to contain elf header"
                  << ", file size: " << size << "\n";
        return -1;
    }

    const char* buf = reinterpret_cast<const char*>(mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0));
    if (buf == MAP_FAILED) {
        close(fd);
        std::cerr << "ERROR: Could not mmap() " << elf_file 
                  << ": " << strerror(errno) << "\n";
        return -1;
    }
    
  const Elf64_Ehdr* eh64 = (const Elf64_Ehdr*)buf;
  const bool valid_header = 
      (IS_ELF32(*eh64) || IS_ELF64(*eh64)) &&
      (IS_ELFLE(*eh64) || IS_ELFBE(*eh64)) &&
      (IS_ELF_EXEC(*eh64)) &&
      (IS_ELF_RISCV(*eh64) || IS_ELF_EM_NONE(*eh64)) &&
      IS_ELF_VCURRENT(*eh64);

  if (!valid_header) {
      munmap((void*)buf, size);
      close(fd);
      std::cerr << "ERROR: File " << elf_file << " does not have a valid RISC-V ELF header.";
      return -1;
  }
  

  if (IS_ELFLE(*eh64)) {
    if (IS_ELF32(*eh64)) {
        load_elf<Elf32_Ehdr, Elf32_Phdr, Elf32_Shdr, Elf32_Sym, true>(buf, size);
    } else { 
        load_elf<Elf64_Ehdr, Elf64_Phdr, Elf64_Shdr, Elf64_Sym, true>(buf, size);
    }
  } else {
#ifndef RISCV_ENABLE_DUAL_ENDIAN
      throw std::invalid_argument("Specified ELF is big endian.  Configure with --enable-dual-endian to enable support");
#else
      if (IS_ELF32(*eh64)) {
          LOAD_ELF<Elf32_Ehdr, Elf32_Phdr, Elf32_Shdr, Elf32_Sym, false>(buf, size);
      } else {
          LOAD_ELF<Elf64_Ehdr, Elf64_Phdr, Elf64_Shdr, Elf64_Sym, false>(buf, size);
      }
#endif
  }
  
  munmap((void*)buf, size);
  close(fd);
  
  return 0;
}
