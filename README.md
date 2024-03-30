GTKWave(https://github.com/gtkwave/gtkwave) Alias Files and External Disassemblers for RISCV.

# Programs

   - `scripts/generate_csrs.py` - Generate CSR Alias Files
   - `src/decode_addr.cpp`      - Convert elf file to alias files.
   - `src/decode_inst.cpp`      - Decode opcodes to instructions.

# Data

   - `csr_data/`                - Alias Files for CSRs
     - `<csr>.gtkw`            - Decode fields for a given CSR

# Example

Assumes `gtkwave` is in the path.

   - `example/Makefile`           - Generates symbol files and runs gtkwave.
   - `example/vcd-trace.gtkw`     - Example GTKWave save file.

   - `example/main.elf`           - Example firmware image.
   - `example/vcd-trace.vcd`      - Trace of `main.elf` running.
   - `example/vcd-trace.fst`      - Trace of `main.elf` running.

   - `example/symbols_data.gtkw`  - Symbols from example firmware image.
   - `example/symbols_func.gtkw`  - Functions from example firmware image.

Convert files and run GTKWave.

~~~   
> make run
~~~

## Firmware Trace Example

![Example of firmware trace](/example/vcd-wave-int.png)

# Compiling

~~~
> make
> make install PREFIX_DIR=~/.local/
~~~

# Using decode_addr


`decode_addr <elf file> <output prefix>`

   - `<elf file>`      : RISC-V elf binary
   - `<output prefix>` : Prefix for output files.


e.g.

~~~
./decode_addr build_tidy/main.elf main
~~~

Creates:

- `main_data.gtkw`
- `main_func.gtkw`

Example Function File:
~~~
0000000020010000 _enter
...
00000000200100fe _enter
0000000020010100 main
...
0000000020010afc memset
0000000020010afe .text.end
~~~

Example Data File:
~~~
0000000080000000 ecall_count
0000000080000004 ecall_count+4
0000000080000008 timestamp
000000008000000c timestamp+4
0000000080000010 .stack.start
...
0000000080000f08 .stack.start+3832
0000000080000f0c .stack.start+3836
0000000080000f10 .heap.start
0000000080000f14 .heap.start+4
0000000080000f18 .heap.start+8
...
000000008000170c .heap.start+2044
0000000080001710 .heap.end
~~~

# Using decode_inst

The ``decode_inst`` takes hex decimal opcodes as stdin and writes the decoded assembly on stdout.

e.g.

Hex opcode data from objdump.
~~~
$ tail main.disasm
20010ae2:       00000297                auipc   t0,0x0
20010ae6:       9696                    add     a3,a3,t0
20010ae8:       8286                    mv      t0,ra
20010aea:       fa8680e7                jalr    -88(a3)
20010aee:       8096                    mv      ra,t0
20010af0:       17c1                    addi    a5,a5,-16
20010af2:       8f1d                    sub     a4,a4,a5
20010af4:       963e                    add     a2,a2,a5
20010af6:       f8c374e3                bgeu    t1,a2,20010a7e <memset+0x2a>
20010afa:       b7a5                    j       20010a62 <memset+0xe>
~~~

Piped into `decode_inst`.

~~~
$ cat main.disasm | cut -f2 -d: | cut -c -10 | ./decode_inst  | tail
auipc   t0, 0x0
c.add   a3, t0
c.mv    t0, ra
jalr    ra, a3, -88
c.mv    ra, t0
c.addi  a5, -16
c.sub   a4, a5
c.add   a2, a5
bgeu    t1, a2, pc - 120
c.j     pc - 152
~~~
