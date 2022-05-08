CXX           := g++

decode_inst: decode_inst.cpp
	${CXX} decode_inst.cpp \
		-o $@ \
		-I ../extern/riscv-isa-sim/riscv/ \
		-I ../extern/riscv-isa-sim/softfloat/ \
		-I ../extern/riscv-isa-sim/ \
		-L ../extern/riscv-isa-sim/ \
		-ldisasm \
		-lriscv \
		-ldl
