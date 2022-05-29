PREFIX_DIR=~/.local/
INSTALL=/usr/bin/install

ARCH=\
	rv32imac \
	rv64imac 

configure:
	pip3 install -r requirements.txt
	cd extern/riscv-isa-sim/; ./configure

build:
	cd extern/riscv-isa-sim/; make -j8
	cs src; make

csrs:
	if [ ! -d csr_data ] ; then	mkdir csr_data; fi
	scripts/generate_csrs.py \
		extern/riscv-isa-data/csr.yaml \
		csr_data

install : 
	${INSTALL} -d ${PREFIX_DIR}/bin
	${INSTALL} -d ${PREFIX_DIR}/share/riscv-gtkwave
	${INSTALL} src/decode_addr ${PREFIX_DIR}/bin
	${INSTALL} src/decode_inst ${PREFIX_DIR}/bin
	for arch in ${ARCH} ; do \
		ln -s ${PREFIX_DIR}/bin/decode_inst ${PREFIX_DIR}/bin/decode_inst-$${arch}; \
	done
	${INSTALL} csr_data/*.gtkw ${PREFIX_DIR}/share/riscv-gtkwave

