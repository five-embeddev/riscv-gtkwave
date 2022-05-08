// Copyright (c) 2010-2017, The Regents of the University of California
// (Regents).  All Rights Reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. Neither the name of the Regents nor the
//    names of its contributors may be used to endorse or promote products
//    derived from this software without specific prior written permission.
// 
// IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
// SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
// OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
// BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
// HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
// MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
// 

// This is dervied from spike-dasm.cc
// GTKWave external filter process

#include "disasm.h"
#include "extension.h"

#include <iostream>
#include <string>
#include <cstdint>
#include <vector>

int main(int argc, char **argv)
{

    // Use the executable name to determine the isa/extension architecture 
    const std::string prog_name{argv[0]};
    // Use '-' as a delimiter
    std::string isa;
    std::vector<std::string> extensions;
    const auto i0 = prog_name.find('-');
    if (i0 != std::string::npos) {
        const auto i1 = prog_name.find('-',i0+1);
        if (i1 == std::string::npos) {
            isa.insert(isa.begin(), prog_name.cbegin()+i0+1,prog_name.cend());
        } else  {
            isa.insert(isa.begin(), prog_name.cbegin()+i0+1,prog_name.cbegin()+i1-1);
            extensions.emplace_back(prog_name.cbegin()+i1+1,prog_name.cend());
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

    while(!feof(stdin))
    {
        char buf[1025];
        buf[0] = 0;
        fscanf(stdin, "%s", buf);
        if(buf[0])
        {
            int bits;
            sscanf(buf, "%x", &bits);

            // TODO - 64 bits & sign extension?

            std::string dis = disassembler->disassemble(bits);
            printf("%s\n", dis.c_str());
            fflush(stdout);
        }
    }
    return(0);
}


