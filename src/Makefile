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


all : decode_addr decode_inst decode_reg

decoders/decode_factory.cpp : decoders/decode_factory_template.cpp
	python3 ../extern/development-utils/generators/yaml_jinja.py \
		--templates decoders \
		../extern/riscv-isa-data/csr.yaml \
		decode_factory_template.cpp \
	    decoders/decode_factory.cpp

decoders/decode_regs.cpp : decoders/decode_regs_template.cpp
	python3 ../extern/development-utils/generators/yaml_jinja.py \
		--templates decoders \
		../extern/riscv-isa-data/csr.yaml \
		decode_regs_template.cpp \
	    decoders/decode_regs.cpp

decoders/decode_regs.hpp : decoders/decode_regs_template.hpp
	python3 ../extern/development-utils/generators/yaml_jinja.py \
		--templates decoders \
		../extern/riscv-isa-data/csr.yaml \
		decode_regs_template.hpp \
	    decoders/decode_regs.hpp

decoders/decode_regs.cpp : decoders/decode_regs.hpp

clean:
	rm -f decode_addr decode_inst decode_rega

decode_inst: decode_inst.cpp

decode_addr: decode_addr.cpp

decode_reg: decode_reg.cpp decoders/decode_factory.cpp decoders/decode_regs.cpp

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

