
csrs:
	if [ ! -d csr_data ] ; then	mkdir csr_data; fi
	scripts/generate_csrs.py \
		extern/riscv-isa-data/csr.yaml \
		csr_data
