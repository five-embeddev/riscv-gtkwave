CXX=g++
CFLAGS=-g -Og
CPPFLAGS=\
		-I ../extern/riscv-isa-sim/riscv/ \
		-I ../extern/riscv-isa-sim/softfloat/ \
		-I ../extern/riscv-isa-sim/ 
CPPFLAGS_decode_addr=
LDFLAGS=\
		-L ../extern/riscv-isa-sim/ \
		-ldl 

LIBS=\
	../extern/riscv-isa-sim/libdisasm.a \
	../extern/riscv-isa-sim/libriscv.a \
	../extern/riscv-isa-sim/libfdt.a \
	../extern/riscv-isa-sim/libsoftfloat.a \
	../extern/riscv-isa-sim/libfesvr.a \
	../extern/riscv-isa-sim/libspike_dasm.a \


LDFLAGS_decode_inst=\
		${LIBS} \
		-ldl \
		-lboost_regex


all : decode_addr decode_inst

clean:
	rm -f decode_addr decode_inst

decode_inst: decode_inst.cpp

decode_addr: decode_addr.cpp

% : %.cpp
	${CXX}\
		 $^  \
		-o $@ \
		${CFLAGS} \
		-std=c++17 \
		${CPPFLAGS} \
		${CPPFLAGS_${@}} \
		${LDFLAGS} \
		${LDFLAGS_${@}} 

