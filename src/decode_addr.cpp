// See LICENSE for license details.

// Derived from riscv-isa-sim/fesvr/elfloader.cc
// See https://en.wikipedia.org/wiki/Executable_and_Linkable_Format

//#include "elf.h"

#include "config.h"

#include <byteswap.h>
#include <elf.h>
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

static inline uint8_t swap(uint8_t n) { return n; }
static inline int8_t swap(int8_t n) { return n; }
static inline int16_t swap(uint16_t n) { return bswap_16(n); }
static inline int32_t swap(uint32_t n) { return bswap_32(n); }
static inline int64_t swap(uint64_t n) { return bswap_64(n); }
static inline int16_t swap(int16_t n) { return bswap_16(uint16_t(n)); }
static inline int32_t swap(int32_t n) { return bswap_32(uint32_t(n)); }
static inline int64_t swap(int64_t n) { return bswap_64(uint64_t(n)); }

#ifdef WORDS_BIGENDIAN
template<typename T> static inline T from_be(T n) { return n; }
template<typename T> static inline T to_be(T n) { return n; }
template<typename T> static inline T from_le(T n) { return swap(n); }
template<typename T> static inline T to_le(T n) { return swap(n); }
#else
template<typename T> static inline T from_le(T n) { return n; }
template<typename T> static inline T to_le(T n) { return n; }
template<typename T> static inline T from_be(T n) { return swap(n); }
template<typename T> static inline T to_be(T n) { return swap(n); }
#endif

#define IS_ELF(hdr) \
  ((hdr).e_ident[0] == 0x7f && (hdr).e_ident[1] == 'E' && \
   (hdr).e_ident[2] == 'L'  && (hdr).e_ident[3] == 'F')

#define ELF_SWAP(hdr, val) (IS_ELFLE(hdr)? from_le((val)) : from_be((val)))

#define IS_ELF32(hdr) (IS_ELF(hdr) && (hdr).e_ident[4] == 1)
#define IS_ELF64(hdr) (IS_ELF(hdr) && (hdr).e_ident[4] == 2)
#define IS_ELFLE(hdr) (IS_ELF(hdr) && (hdr).e_ident[5] == 1)
#define IS_ELFBE(hdr) (IS_ELF(hdr) && (hdr).e_ident[5] == 2)
#define IS_ELF_EXEC(hdr) (IS_ELF(hdr) && ELF_SWAP((hdr), (hdr).e_type) == ET_EXEC)
#define IS_ELF_RISCV(hdr) (IS_ELF(hdr) && ELF_SWAP((hdr), (hdr).e_machine) == EM_RISCV)
#define IS_ELF_EM_NONE(hdr) (IS_ELF(hdr) && ELF_SWAP((hdr), (hdr).e_machine) == EM_NONE)
#define IS_ELF_VCURRENT(hdr) (IS_ELF(hdr) && ELF_SWAP((hdr), (hdr).e_version) == EV_CURRENT)


template<typename ehdr_t, 
         typename phdr_t, 
         typename shdr_t, 
         typename sym_t, 
         bool endian_is_le>
void load_elf(const char *buf, 
              const size_t size,
              std::function<void(std::function<reg_t(reg_t)>, const ehdr_t &, const phdr_t &, const uint8_t *data)> handle_phdr,
              std::function<void(std::function<reg_t(reg_t)>, const ehdr_t &, const shdr_t &, const sym_t &, const char *symbol)> handle_sym
    ) {
    
    auto bswap = [](reg_t x) -> uint64_t {
        if constexpr (endian_is_le) {
            return from_le(x);
        } else {
            return from_be(x);
        }
    };

    std::vector<uint8_t> zeros;
    const ehdr_t* eh = (const ehdr_t*)buf;                                                 
    const phdr_t* ph = (const phdr_t*)(buf + bswap(eh->e_phoff));                          

    const size_t elf_end_location = bswap(eh->e_phoff) + bswap(eh->e_phnum) * sizeof(*ph);
    if (elf_end_location > size) {
        throw std::invalid_argument("Specified ELF seems to be truncated");
    }
    
    for (unsigned i = 0; i < bswap(eh->e_phnum); i++) {                        
        if (bswap(ph[i].p_type) == PT_LOAD && bswap(ph[i].p_memsz)) {            
            if (bswap(ph[i].p_filesz)) {                                           
                
                const size_t record_end = bswap(ph[i].p_offset) + bswap(ph[i].p_filesz);
                if (record_end > size) {
                    throw std::invalid_argument("Specified ELF seems to have a truncated phdr record.");
                }
                
                handle_phdr(bswap, *eh, ph[i],(const uint8_t*)buf + bswap(ph[i].p_offset));
                //memif->write(bswap(ph[i].p_paddr), bswap(ph[i].p_filesz),            
                //           (uint8_t*)buf + bswap(ph[i].p_offset));                 
            }                                                                      
            if (size_t pad = bswap(ph[i].p_memsz) - bswap(ph[i].p_filesz)) {       
                zeros.resize(pad);                                                   
                handle_phdr(bswap, *eh, ph[i],(const uint8_t*)zeros.data());
                //memif->write(bswap(ph[i].p_paddr) + bswap(ph[i].p_filesz), pad,      
                //zeros.data());                                          
            }                                                                      
        }                                                                        
    }                                                                          
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
            handle_sym(bswap, *eh, *sh, sym[i], strtab + bswap(sym[i].st_name));
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
  
  auto handle_phdr = [&](
      std::function<reg_t(reg_t)> bswap,
      const auto &ehdr, 
      const auto &phdr, 
      const auto * data) -> void {
  };

  std::string sym_file;
  std::string sym_section;
  
  auto handle_sym = [&](
      std::function<reg_t(reg_t)> bswap,
      const auto &ehdr, 
      const auto &shdr, 
      const auto &sym,
      const auto *data) -> void {
      uint8_t st_type = ELF32_ST_TYPE(sym.st_info);
      uint8_t st_bind = ELF32_ST_BIND(sym.st_info);
      if (st_type == STT_FILE) {
          sym_file = data;
          std::cerr << sym_file << ":file:" <<" = 0x" << std::hex << bswap(sym.st_value) << "\n";
      } 
      else if (st_type == STT_SECTION) {
          sym_section = data;
      }
      else if (st_type == STT_OBJECT) {
          std::cerr << sym_file << ":common:" << sym_section << "." << data <<" = 0x" << std::hex << bswap(sym.st_value) << "\n";
      }
      else if (st_type == STT_FUNC) {
          std::cerr << sym_file << ":func:" << sym_section << "." << data <<" = 0x" << std::hex << bswap(sym.st_value) << "\n";
      }
  };

  if (IS_ELFLE(*eh64)) {
    if (IS_ELF32(*eh64)) {
        load_elf<Elf32_Ehdr, Elf32_Phdr, Elf32_Shdr, Elf32_Sym, true>(buf, size, handle_phdr, handle_sym);
    } else { 
        load_elf<Elf64_Ehdr, Elf64_Phdr, Elf64_Shdr, Elf64_Sym, true>(buf, size, handle_phdr, handle_sym);
    }
  } else {
#ifndef RISCV_ENABLE_DUAL_ENDIAN
      throw std::invalid_argument("Specified ELF is big endian.  Configure with --enable-dual-endian to enable support");
#else
      if (IS_ELF32(*eh64)) {
          LOAD_ELF<Elf32_Ehdr, Elf32_Phdr, Elf32_Shdr, Elf32_Sym, false>(buf, size, handle_phdr, handle_sym);
      } else {
          LOAD_ELF<Elf64_Ehdr, Elf64_Phdr, Elf64_Shdr, Elf64_Sym, false>(buf, size, handle_phdr, handle_sym);
      }
#endif
  }
  
  munmap((void*)buf, size);
  close(fd);
  
  return 0;
}
