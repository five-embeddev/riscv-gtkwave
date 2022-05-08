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
