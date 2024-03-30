// See LICENSE for license details.

// Executable File should be renamed to include register
// e.g. decode_reg-mstatus
//

#include <string>
#include <iostream>

#include "decoders/decode_factory.hpp"

int main(int argc, char **argv)
{
    const std::string prog_path{argv[0]};
    std::string prog_name;
    std::string reg_name;
    // Use '-' as a delimiter
    const auto d0 = prog_path.rfind('-');
    if (d0 == std::string::npos) {
        std::cerr << "USAGE: decode_reg-<reg name>\n";
        return 1;
    }
    // Extract the register name
    prog_name = prog_path.substr(d0+1);
    reg_name.insert(reg_name.begin(), prog_path.cbegin()+d0+1,prog_path.cend());
    std::cerr << "reg name=" << reg_name <<  "\n";

    // Create decoder for given register
    auto decoder{decoder_factory::get(reg_name)};

    // Read input from gtkwave
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

            std::string dis = decoder->decode(bits);
            printf("%s\n", dis.c_str());
            fflush(stdout);
        }
    }


    return 0;
}
