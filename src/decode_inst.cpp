// See LICENSE for license details.

// This program is dervied from spike-dasm.cc
// GTKWave external filter process

// Instruction words from the waveform are input to stdin,
// disassembled operations outut on stdout.

#include "disasm.h"
#include "extension.h"
#include "isa_parser.h"
#include "gtkwave_loop.hpp"

#include <iostream>
#include <string>
#include <cstdint>
#include <vector>

int main(int argc, char **argv)
{

    // Use the executable name to determine the isa/extension architecture 
    // e.g 
    // decode_inst
    // decode_inst-rv32imac
    // decode_inst-rv64imac
    const std::string prog_path{argv[0]};
    std::string prog_name;
    // Use '-' as a delimiter
    std::string isa;
    std::vector<std::string> extensions;
    const auto d0 = prog_path.rfind('/');
    if (d0 != std::string::npos) {
        prog_name = prog_path.substr(d0+1);
    } else {
        prog_name = prog_path;
    }
    const auto i1 = prog_name.rfind('-');
    if (i1 != std::string::npos) {
        const auto i0 = prog_name.rfind('-',i1-1);
        if (i0 == std::string::npos) {
            isa.insert(isa.begin(), prog_name.cbegin()+i1+1,prog_name.cend());
            std::cerr << isa << "\n";
        } else  {
            isa.insert(isa.begin(), prog_name.cbegin()+i0+1,prog_name.cbegin()+i1-1);
            extensions.emplace_back(prog_name.cbegin()+i1+1,prog_name.cend());
            std::cerr << isa << "\n";
        }
    } else {
        isa = DEFAULT_ISA;
    }
    isa_parser_t isa_parser(isa.c_str(), DEFAULT_PRIV);
    std::unique_ptr<disassembler_t> disassembler = std::make_unique<disassembler_t>(&isa_parser);
    for (const auto extension_name : extensions) {
        auto extension = find_extension(extension_name.c_str());
        for (auto disasm_insn : extension()->get_disasms()) {
            disassembler->add_insn(disasm_insn);
        }
    }


    gtkwave_loop(
        [&](uint64_t v) -> std::string {
            return disassembler->disassemble(v);
        });
        
    return(0);
}


