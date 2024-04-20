BIN_DIR=../src/
export DECODE_ELF=main.elf

run : symbols_data.gtkw symbols_func.gtkw
	gtkwave vcd-trace.fst vcd-trace.gtkw

../src/decode_addr ../src/decode_inst : 
	${MAKE} -C ../src
