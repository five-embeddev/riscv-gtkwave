// See LICENSE for license details.

// This program is dervied from spike-dasm.cc
// GTKWave external filter process

// Instruction words from the waveform are input to stdin,
// disassembled operations outut on stdout.

#include <functional>
#include <string>

/** Look over input on stdin and decode it.
    Intended to be used as a GTKWave filter process.
 */
void gtkwave_loop(std::function<std::string(uint64_t v)> decode) {
    
    while(!feof(stdin))
    {
        char buf[1025];
        buf[0] = 0;
        fscanf(stdin, "%s", buf);
        if(buf[0])
        {
            uint64_t bits;
            sscanf(buf, "%lx", &bits);
            // TODO - 64 bits & sign extension?
            auto dis = decode(bits);
            printf("%s\n", dis.c_str());
            fflush(stdout);
        }
    }
}
