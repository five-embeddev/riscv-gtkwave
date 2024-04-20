// See LICENSE for license details.

// Derived from riscv-isa-sim/fesvr/elfloader.cc
// See https://en.wikipedia.org/wiki/Executable_and_Linkable_Format

#include <stdlib.h>

#include "decode_elf_addr.hpp"
#include "gtkwave_loop.hpp"

int main(int argc, char **argv)
{
    // If DECODE_ELF is set then read address from stdin and decode (gtkwave filter)
    std::string elf_file{getenv("DECODE_ELF")};
    const bool interactive_mode{!elf_file.empty()};
    if (!interactive_mode) {
        // Read elf files and dump to text file
        if (argc != 3) {
            std::cerr << "USAGE: " << argv[0] << " <elf file> <output prefix>\n";
            std::cerr << "USAGE: DECODE_ELF=<elf file> " << argv[0] << "\n";
            return -1;
        }
        elf_file = argv[1];
    }

    addr_map_t func_addr;
    addr_map_t data_addr;
    
    int rc = open_elf_file(elf_file.c_str(), func_addr, data_addr);
    if (rc < -1) {
        std::cerr << "ERROR: failed to read elf file\n";
        return rc;
    }
 
    if (interactive_mode) {
        
        gtkwave_loop(
            [&](uint64_t v) -> std::string {
                auto i = func_addr.find(v);
                if (i != func_addr.end()) {
                    return i->second;
                }
                auto j = data_addr.find(v);
                if (j != data_addr.end()) {
                    return j->second;
                }
                return "-";
            });
        
    } else {
        const std::string output_prefix{argv[2]};
        const std::string output_data = output_prefix + "_data.gtkw";
        const std::string output_func = output_prefix + "_func.gtkw";
        
        {
            std::ofstream fout_func(output_func, std::ios::out);
            dump_symbols(fout_func, func_addr, 2, false);
        }
        
        {
            std::ofstream fout_data(output_data, std::ios::out);
            dump_symbols(fout_data, data_addr, 4, true);
        }
    
    }
    return 0;
}
