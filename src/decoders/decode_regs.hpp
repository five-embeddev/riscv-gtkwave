// See LICENSE for license details.

#include <string>
#include <stdexcept>

#include "decode_factory.hpp"
class decode_bsatp : public decoder {
    std::string decode(uint64_t) override;
};

class decode_bscause : public decoder {
    std::string decode(uint64_t) override;
};

class decode_bsepc : public decoder {
    std::string decode(uint64_t) override;
};

class decode_bsie : public decoder {
    std::string decode(uint64_t) override;
};

class decode_bsip : public decoder {
    std::string decode(uint64_t) override;
};

class decode_bsscratch : public decoder {
    std::string decode(uint64_t) override;
};

class decode_bsstatus : public decoder {
    std::string decode(uint64_t) override;
};

class decode_bstval : public decoder {
    std::string decode(uint64_t) override;
};

class decode_bstvec : public decoder {
    std::string decode(uint64_t) override;
};

class decode_cycle : public decoder {
    std::string decode(uint64_t) override;
};

class decode_cycleh : public decoder {
    std::string decode(uint64_t) override;
};

class decode_dcsr : public decoder {
    std::string decode(uint64_t) override;
};

class decode_dpc : public decoder {
    std::string decode(uint64_t) override;
};

class decode_dscratch : public decoder {
    std::string decode(uint64_t) override;
};

class decode_dscratch0 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_dscratch1 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_fcsr : public decoder {
    std::string decode(uint64_t) override;
};

class decode_fflags : public decoder {
    std::string decode(uint64_t) override;
};

class decode_frm : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hcontext : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hcounteren : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hedeleg : public decoder {
    std::string decode(uint64_t) override;
};

class decode_henvcfg : public decoder {
    std::string decode(uint64_t) override;
};

class decode_henvcfgh : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hgatp : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hgeie : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hgeip : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hideleg : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hie : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hip : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter10 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter10h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter11 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter11h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter12 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter12h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter13 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter13h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter14 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter14h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter15 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter15h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter16 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter16h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter17 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter17h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter18 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter18h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter19 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter19h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter20 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter20h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter21 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter21h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter22 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter22h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter23 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter23h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter24 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter24h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter25 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter25h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter26 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter26h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter27 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter27h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter28 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter28h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter29 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter29h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter3 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter30 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter30h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter31 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter31h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter3h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter4 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter4h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter5 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter5h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter6 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter6h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter7 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter7h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter8 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter8h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter9 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hpmcounter9h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hstatus : public decoder {
    std::string decode(uint64_t) override;
};

class decode_htimedelta : public decoder {
    std::string decode(uint64_t) override;
};

class decode_htimedeltah : public decoder {
    std::string decode(uint64_t) override;
};

class decode_htinst : public decoder {
    std::string decode(uint64_t) override;
};

class decode_htval : public decoder {
    std::string decode(uint64_t) override;
};

class decode_hvip : public decoder {
    std::string decode(uint64_t) override;
};

class decode_instret : public decoder {
    std::string decode(uint64_t) override;
};

class decode_instreth : public decoder {
    std::string decode(uint64_t) override;
};

class decode_marchid : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mbase : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mbound : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mcause : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mconfigptr : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mcontext : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mcounteren : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mcountinhibit : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mcycle : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mcycleh : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mdbase : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mdbound : public decoder {
    std::string decode(uint64_t) override;
};

class decode_medeleg : public decoder {
    std::string decode(uint64_t) override;
};

class decode_menvcfg : public decoder {
    std::string decode(uint64_t) override;
};

class decode_menvcfgh : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mepc : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhartid : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter10 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter10h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter11 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter11h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter12 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter12h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter13 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter13h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter14 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter14h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter15 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter15h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter16 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter16h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter17 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter17h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter18 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter18h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter19 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter19h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter20 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter20h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter21 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter21h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter22 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter22h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter23 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter23h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter24 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter24h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter25 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter25h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter26 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter26h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter27 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter27h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter28 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter28h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter29 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter29h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter3 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter30 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter30h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter31 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter31h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter3h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter4 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter4h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter5 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter5h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter6 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter6h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter7 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter7h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter8 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter8h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter9 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmcounter9h : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent10 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent11 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent12 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent13 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent14 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent15 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent16 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent17 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent18 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent19 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent20 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent21 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent22 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent23 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent24 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent25 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent26 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent27 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent28 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent29 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent3 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent30 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent31 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent4 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent5 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent6 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent7 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent8 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mhpmevent9 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mibase : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mibound : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mideleg : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mie : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mimpid : public decoder {
    std::string decode(uint64_t) override;
};

class decode_minstret : public decoder {
    std::string decode(uint64_t) override;
};

class decode_minstreth : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mintstatus : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mip : public decoder {
    std::string decode(uint64_t) override;
};

class decode_misa : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mnxti : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mscratch : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mscratchcsw : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mscratchcswl : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mseccfg : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mseccfgh : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mstatus : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mstatush : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mtime : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mtimecmp : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mtinst : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mtval : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mtval2 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mtvec : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mtvt : public decoder {
    std::string decode(uint64_t) override;
};

class decode_mvendorid : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr0 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr1 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr10 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr11 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr12 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr13 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr14 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr15 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr2 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr3 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr4 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr5 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr6 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr63 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr7 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr8 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpaddr9 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpcfg0 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpcfg1 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpcfg14 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpcfg15 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpcfg2 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_pmpcfg3 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_satp : public decoder {
    std::string decode(uint64_t) override;
};

class decode_scause : public decoder {
    std::string decode(uint64_t) override;
};

class decode_scontext : public decoder {
    std::string decode(uint64_t) override;
};

class decode_scounteren : public decoder {
    std::string decode(uint64_t) override;
};

class decode_sedeleg : public decoder {
    std::string decode(uint64_t) override;
};

class decode_senvcfg : public decoder {
    std::string decode(uint64_t) override;
};

class decode_sepc : public decoder {
    std::string decode(uint64_t) override;
};

class decode_sideleg : public decoder {
    std::string decode(uint64_t) override;
};

class decode_sie : public decoder {
    std::string decode(uint64_t) override;
};

class decode_sintstatus : public decoder {
    std::string decode(uint64_t) override;
};

class decode_sip : public decoder {
    std::string decode(uint64_t) override;
};

class decode_snxti : public decoder {
    std::string decode(uint64_t) override;
};

class decode_sscratch : public decoder {
    std::string decode(uint64_t) override;
};

class decode_sscratchcsw : public decoder {
    std::string decode(uint64_t) override;
};

class decode_sscratchcswl : public decoder {
    std::string decode(uint64_t) override;
};

class decode_sstatus : public decoder {
    std::string decode(uint64_t) override;
};

class decode_stval : public decoder {
    std::string decode(uint64_t) override;
};

class decode_stvec : public decoder {
    std::string decode(uint64_t) override;
};

class decode_stvt : public decoder {
    std::string decode(uint64_t) override;
};

class decode_tdata1 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_tdata2 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_tdata3 : public decoder {
    std::string decode(uint64_t) override;
};

class decode_time : public decoder {
    std::string decode(uint64_t) override;
};

class decode_timeh : public decoder {
    std::string decode(uint64_t) override;
};

class decode_tselect : public decoder {
    std::string decode(uint64_t) override;
};

class decode_ucause : public decoder {
    std::string decode(uint64_t) override;
};

class decode_uepc : public decoder {
    std::string decode(uint64_t) override;
};

class decode_uie : public decoder {
    std::string decode(uint64_t) override;
};

class decode_uintstatus : public decoder {
    std::string decode(uint64_t) override;
};

class decode_uip : public decoder {
    std::string decode(uint64_t) override;
};

class decode_unxti : public decoder {
    std::string decode(uint64_t) override;
};

class decode_uscratch : public decoder {
    std::string decode(uint64_t) override;
};

class decode_uscratchcsw : public decoder {
    std::string decode(uint64_t) override;
};

class decode_uscratchcswl : public decoder {
    std::string decode(uint64_t) override;
};

class decode_ustatus : public decoder {
    std::string decode(uint64_t) override;
};

class decode_utval : public decoder {
    std::string decode(uint64_t) override;
};

class decode_utvec : public decoder {
    std::string decode(uint64_t) override;
};

class decode_utvt : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vl : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vsatp : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vscause : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vsepc : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vsie : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vsip : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vsscratch : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vsstatus : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vstart : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vstval : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vstvec : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vtype : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vxrm : public decoder {
    std::string decode(uint64_t) override;
};

class decode_vxsat : public decoder {
    std::string decode(uint64_t) override;
};

