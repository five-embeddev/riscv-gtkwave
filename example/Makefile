BIN_DIR=../src/

run : symbols_data.gtkw symbols_func.gtkw
	gtkwave vcd-trace.fst vcd-trace.gtkw

symbols_data.gtkw symbols_func.gtkw : main.elf ${BIN_DIR}/decode_addr
	${BIN_DIR}/decode_addr main.elf symbols

../src/decode_addr ../src/decode_inst : 
	${MAKE} -C ../src
