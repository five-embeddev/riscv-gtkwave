CXX=g++
CFLAGS=-g -Og
CPPFLAGS=\
		-I ../extern/riscv-isa-sim/riscv/ \
		-I ../extern/riscv-isa-sim/softfloat/ \
		-I ../extern/riscv-isa-sim/ 
CPPFLAGS_decode_addr=
LDFLAGS=\
		-L ../extern/riscv-isa-sim/ \
		-ldisasm \
		-lriscv \
		-ldl


all : decode_addr decode_inst

decode_inst: decode_inst.cpp

decode_addr: decode_addr.cpp

% : %.cpp
	${CXX} $^ \
		-o $@ \
		${CFLAGS} \
		-std=c++17 \
		${CPPFLAGS} \
		${CPPFLAGS_${@}} \
		${LDFLAGS} \
		${LDFLAGS_${@}} 

