// See LICENSE for license details.

#include <string>
#include <stdexcept>
#include <memory>

#include "decode_factory.hpp"
#include "decode_regs.hpp"

std::unique_ptr<decoder> decoder_factory::get(const std::string &reg_name) {
    if (reg_name == "bsatp") {
        return std::make_unique<decode_bsatp>();
    }

    if (reg_name == "bscause") {
        return std::make_unique<decode_bscause>();
    }

    if (reg_name == "bsepc") {
        return std::make_unique<decode_bsepc>();
    }

    if (reg_name == "bsie") {
        return std::make_unique<decode_bsie>();
    }

    if (reg_name == "bsip") {
        return std::make_unique<decode_bsip>();
    }

    if (reg_name == "bsscratch") {
        return std::make_unique<decode_bsscratch>();
    }

    if (reg_name == "bsstatus") {
        return std::make_unique<decode_bsstatus>();
    }

    if (reg_name == "bstval") {
        return std::make_unique<decode_bstval>();
    }

    if (reg_name == "bstvec") {
        return std::make_unique<decode_bstvec>();
    }

    if (reg_name == "cycle") {
        return std::make_unique<decode_cycle>();
    }

    if (reg_name == "cycleh") {
        return std::make_unique<decode_cycleh>();
    }

    if (reg_name == "dcsr") {
        return std::make_unique<decode_dcsr>();
    }

    if (reg_name == "dpc") {
        return std::make_unique<decode_dpc>();
    }

    if (reg_name == "dscratch") {
        return std::make_unique<decode_dscratch>();
    }

    if (reg_name == "dscratch0") {
        return std::make_unique<decode_dscratch0>();
    }

    if (reg_name == "dscratch1") {
        return std::make_unique<decode_dscratch1>();
    }

    if (reg_name == "fcsr") {
        return std::make_unique<decode_fcsr>();
    }

    if (reg_name == "fflags") {
        return std::make_unique<decode_fflags>();
    }

    if (reg_name == "frm") {
        return std::make_unique<decode_frm>();
    }

    if (reg_name == "hcontext") {
        return std::make_unique<decode_hcontext>();
    }

    if (reg_name == "hcounteren") {
        return std::make_unique<decode_hcounteren>();
    }

    if (reg_name == "hedeleg") {
        return std::make_unique<decode_hedeleg>();
    }

    if (reg_name == "henvcfg") {
        return std::make_unique<decode_henvcfg>();
    }

    if (reg_name == "henvcfgh") {
        return std::make_unique<decode_henvcfgh>();
    }

    if (reg_name == "hgatp") {
        return std::make_unique<decode_hgatp>();
    }

    if (reg_name == "hgeie") {
        return std::make_unique<decode_hgeie>();
    }

    if (reg_name == "hgeip") {
        return std::make_unique<decode_hgeip>();
    }

    if (reg_name == "hideleg") {
        return std::make_unique<decode_hideleg>();
    }

    if (reg_name == "hie") {
        return std::make_unique<decode_hie>();
    }

    if (reg_name == "hip") {
        return std::make_unique<decode_hip>();
    }

    if (reg_name == "hpmcounter10") {
        return std::make_unique<decode_hpmcounter10>();
    }

    if (reg_name == "hpmcounter10h") {
        return std::make_unique<decode_hpmcounter10h>();
    }

    if (reg_name == "hpmcounter11") {
        return std::make_unique<decode_hpmcounter11>();
    }

    if (reg_name == "hpmcounter11h") {
        return std::make_unique<decode_hpmcounter11h>();
    }

    if (reg_name == "hpmcounter12") {
        return std::make_unique<decode_hpmcounter12>();
    }

    if (reg_name == "hpmcounter12h") {
        return std::make_unique<decode_hpmcounter12h>();
    }

    if (reg_name == "hpmcounter13") {
        return std::make_unique<decode_hpmcounter13>();
    }

    if (reg_name == "hpmcounter13h") {
        return std::make_unique<decode_hpmcounter13h>();
    }

    if (reg_name == "hpmcounter14") {
        return std::make_unique<decode_hpmcounter14>();
    }

    if (reg_name == "hpmcounter14h") {
        return std::make_unique<decode_hpmcounter14h>();
    }

    if (reg_name == "hpmcounter15") {
        return std::make_unique<decode_hpmcounter15>();
    }

    if (reg_name == "hpmcounter15h") {
        return std::make_unique<decode_hpmcounter15h>();
    }

    if (reg_name == "hpmcounter16") {
        return std::make_unique<decode_hpmcounter16>();
    }

    if (reg_name == "hpmcounter16h") {
        return std::make_unique<decode_hpmcounter16h>();
    }

    if (reg_name == "hpmcounter17") {
        return std::make_unique<decode_hpmcounter17>();
    }

    if (reg_name == "hpmcounter17h") {
        return std::make_unique<decode_hpmcounter17h>();
    }

    if (reg_name == "hpmcounter18") {
        return std::make_unique<decode_hpmcounter18>();
    }

    if (reg_name == "hpmcounter18h") {
        return std::make_unique<decode_hpmcounter18h>();
    }

    if (reg_name == "hpmcounter19") {
        return std::make_unique<decode_hpmcounter19>();
    }

    if (reg_name == "hpmcounter19h") {
        return std::make_unique<decode_hpmcounter19h>();
    }

    if (reg_name == "hpmcounter20") {
        return std::make_unique<decode_hpmcounter20>();
    }

    if (reg_name == "hpmcounter20h") {
        return std::make_unique<decode_hpmcounter20h>();
    }

    if (reg_name == "hpmcounter21") {
        return std::make_unique<decode_hpmcounter21>();
    }

    if (reg_name == "hpmcounter21h") {
        return std::make_unique<decode_hpmcounter21h>();
    }

    if (reg_name == "hpmcounter22") {
        return std::make_unique<decode_hpmcounter22>();
    }

    if (reg_name == "hpmcounter22h") {
        return std::make_unique<decode_hpmcounter22h>();
    }

    if (reg_name == "hpmcounter23") {
        return std::make_unique<decode_hpmcounter23>();
    }

    if (reg_name == "hpmcounter23h") {
        return std::make_unique<decode_hpmcounter23h>();
    }

    if (reg_name == "hpmcounter24") {
        return std::make_unique<decode_hpmcounter24>();
    }

    if (reg_name == "hpmcounter24h") {
        return std::make_unique<decode_hpmcounter24h>();
    }

    if (reg_name == "hpmcounter25") {
        return std::make_unique<decode_hpmcounter25>();
    }

    if (reg_name == "hpmcounter25h") {
        return std::make_unique<decode_hpmcounter25h>();
    }

    if (reg_name == "hpmcounter26") {
        return std::make_unique<decode_hpmcounter26>();
    }

    if (reg_name == "hpmcounter26h") {
        return std::make_unique<decode_hpmcounter26h>();
    }

    if (reg_name == "hpmcounter27") {
        return std::make_unique<decode_hpmcounter27>();
    }

    if (reg_name == "hpmcounter27h") {
        return std::make_unique<decode_hpmcounter27h>();
    }

    if (reg_name == "hpmcounter28") {
        return std::make_unique<decode_hpmcounter28>();
    }

    if (reg_name == "hpmcounter28h") {
        return std::make_unique<decode_hpmcounter28h>();
    }

    if (reg_name == "hpmcounter29") {
        return std::make_unique<decode_hpmcounter29>();
    }

    if (reg_name == "hpmcounter29h") {
        return std::make_unique<decode_hpmcounter29h>();
    }

    if (reg_name == "hpmcounter3") {
        return std::make_unique<decode_hpmcounter3>();
    }

    if (reg_name == "hpmcounter30") {
        return std::make_unique<decode_hpmcounter30>();
    }

    if (reg_name == "hpmcounter30h") {
        return std::make_unique<decode_hpmcounter30h>();
    }

    if (reg_name == "hpmcounter31") {
        return std::make_unique<decode_hpmcounter31>();
    }

    if (reg_name == "hpmcounter31h") {
        return std::make_unique<decode_hpmcounter31h>();
    }

    if (reg_name == "hpmcounter3h") {
        return std::make_unique<decode_hpmcounter3h>();
    }

    if (reg_name == "hpmcounter4") {
        return std::make_unique<decode_hpmcounter4>();
    }

    if (reg_name == "hpmcounter4h") {
        return std::make_unique<decode_hpmcounter4h>();
    }

    if (reg_name == "hpmcounter5") {
        return std::make_unique<decode_hpmcounter5>();
    }

    if (reg_name == "hpmcounter5h") {
        return std::make_unique<decode_hpmcounter5h>();
    }

    if (reg_name == "hpmcounter6") {
        return std::make_unique<decode_hpmcounter6>();
    }

    if (reg_name == "hpmcounter6h") {
        return std::make_unique<decode_hpmcounter6h>();
    }

    if (reg_name == "hpmcounter7") {
        return std::make_unique<decode_hpmcounter7>();
    }

    if (reg_name == "hpmcounter7h") {
        return std::make_unique<decode_hpmcounter7h>();
    }

    if (reg_name == "hpmcounter8") {
        return std::make_unique<decode_hpmcounter8>();
    }

    if (reg_name == "hpmcounter8h") {
        return std::make_unique<decode_hpmcounter8h>();
    }

    if (reg_name == "hpmcounter9") {
        return std::make_unique<decode_hpmcounter9>();
    }

    if (reg_name == "hpmcounter9h") {
        return std::make_unique<decode_hpmcounter9h>();
    }

    if (reg_name == "hstatus") {
        return std::make_unique<decode_hstatus>();
    }

    if (reg_name == "htimedelta") {
        return std::make_unique<decode_htimedelta>();
    }

    if (reg_name == "htimedeltah") {
        return std::make_unique<decode_htimedeltah>();
    }

    if (reg_name == "htinst") {
        return std::make_unique<decode_htinst>();
    }

    if (reg_name == "htval") {
        return std::make_unique<decode_htval>();
    }

    if (reg_name == "hvip") {
        return std::make_unique<decode_hvip>();
    }

    if (reg_name == "instret") {
        return std::make_unique<decode_instret>();
    }

    if (reg_name == "instreth") {
        return std::make_unique<decode_instreth>();
    }

    if (reg_name == "marchid") {
        return std::make_unique<decode_marchid>();
    }

    if (reg_name == "mbase") {
        return std::make_unique<decode_mbase>();
    }

    if (reg_name == "mbound") {
        return std::make_unique<decode_mbound>();
    }

    if (reg_name == "mcause") {
        return std::make_unique<decode_mcause>();
    }

    if (reg_name == "mconfigptr") {
        return std::make_unique<decode_mconfigptr>();
    }

    if (reg_name == "mcontext") {
        return std::make_unique<decode_mcontext>();
    }

    if (reg_name == "mcounteren") {
        return std::make_unique<decode_mcounteren>();
    }

    if (reg_name == "mcountinhibit") {
        return std::make_unique<decode_mcountinhibit>();
    }

    if (reg_name == "mcycle") {
        return std::make_unique<decode_mcycle>();
    }

    if (reg_name == "mcycleh") {
        return std::make_unique<decode_mcycleh>();
    }

    if (reg_name == "mdbase") {
        return std::make_unique<decode_mdbase>();
    }

    if (reg_name == "mdbound") {
        return std::make_unique<decode_mdbound>();
    }

    if (reg_name == "medeleg") {
        return std::make_unique<decode_medeleg>();
    }

    if (reg_name == "menvcfg") {
        return std::make_unique<decode_menvcfg>();
    }

    if (reg_name == "menvcfgh") {
        return std::make_unique<decode_menvcfgh>();
    }

    if (reg_name == "mepc") {
        return std::make_unique<decode_mepc>();
    }

    if (reg_name == "mhartid") {
        return std::make_unique<decode_mhartid>();
    }

    if (reg_name == "mhpmcounter10") {
        return std::make_unique<decode_mhpmcounter10>();
    }

    if (reg_name == "mhpmcounter10h") {
        return std::make_unique<decode_mhpmcounter10h>();
    }

    if (reg_name == "mhpmcounter11") {
        return std::make_unique<decode_mhpmcounter11>();
    }

    if (reg_name == "mhpmcounter11h") {
        return std::make_unique<decode_mhpmcounter11h>();
    }

    if (reg_name == "mhpmcounter12") {
        return std::make_unique<decode_mhpmcounter12>();
    }

    if (reg_name == "mhpmcounter12h") {
        return std::make_unique<decode_mhpmcounter12h>();
    }

    if (reg_name == "mhpmcounter13") {
        return std::make_unique<decode_mhpmcounter13>();
    }

    if (reg_name == "mhpmcounter13h") {
        return std::make_unique<decode_mhpmcounter13h>();
    }

    if (reg_name == "mhpmcounter14") {
        return std::make_unique<decode_mhpmcounter14>();
    }

    if (reg_name == "mhpmcounter14h") {
        return std::make_unique<decode_mhpmcounter14h>();
    }

    if (reg_name == "mhpmcounter15") {
        return std::make_unique<decode_mhpmcounter15>();
    }

    if (reg_name == "mhpmcounter15h") {
        return std::make_unique<decode_mhpmcounter15h>();
    }

    if (reg_name == "mhpmcounter16") {
        return std::make_unique<decode_mhpmcounter16>();
    }

    if (reg_name == "mhpmcounter16h") {
        return std::make_unique<decode_mhpmcounter16h>();
    }

    if (reg_name == "mhpmcounter17") {
        return std::make_unique<decode_mhpmcounter17>();
    }

    if (reg_name == "mhpmcounter17h") {
        return std::make_unique<decode_mhpmcounter17h>();
    }

    if (reg_name == "mhpmcounter18") {
        return std::make_unique<decode_mhpmcounter18>();
    }

    if (reg_name == "mhpmcounter18h") {
        return std::make_unique<decode_mhpmcounter18h>();
    }

    if (reg_name == "mhpmcounter19") {
        return std::make_unique<decode_mhpmcounter19>();
    }

    if (reg_name == "mhpmcounter19h") {
        return std::make_unique<decode_mhpmcounter19h>();
    }

    if (reg_name == "mhpmcounter20") {
        return std::make_unique<decode_mhpmcounter20>();
    }

    if (reg_name == "mhpmcounter20h") {
        return std::make_unique<decode_mhpmcounter20h>();
    }

    if (reg_name == "mhpmcounter21") {
        return std::make_unique<decode_mhpmcounter21>();
    }

    if (reg_name == "mhpmcounter21h") {
        return std::make_unique<decode_mhpmcounter21h>();
    }

    if (reg_name == "mhpmcounter22") {
        return std::make_unique<decode_mhpmcounter22>();
    }

    if (reg_name == "mhpmcounter22h") {
        return std::make_unique<decode_mhpmcounter22h>();
    }

    if (reg_name == "mhpmcounter23") {
        return std::make_unique<decode_mhpmcounter23>();
    }

    if (reg_name == "mhpmcounter23h") {
        return std::make_unique<decode_mhpmcounter23h>();
    }

    if (reg_name == "mhpmcounter24") {
        return std::make_unique<decode_mhpmcounter24>();
    }

    if (reg_name == "mhpmcounter24h") {
        return std::make_unique<decode_mhpmcounter24h>();
    }

    if (reg_name == "mhpmcounter25") {
        return std::make_unique<decode_mhpmcounter25>();
    }

    if (reg_name == "mhpmcounter25h") {
        return std::make_unique<decode_mhpmcounter25h>();
    }

    if (reg_name == "mhpmcounter26") {
        return std::make_unique<decode_mhpmcounter26>();
    }

    if (reg_name == "mhpmcounter26h") {
        return std::make_unique<decode_mhpmcounter26h>();
    }

    if (reg_name == "mhpmcounter27") {
        return std::make_unique<decode_mhpmcounter27>();
    }

    if (reg_name == "mhpmcounter27h") {
        return std::make_unique<decode_mhpmcounter27h>();
    }

    if (reg_name == "mhpmcounter28") {
        return std::make_unique<decode_mhpmcounter28>();
    }

    if (reg_name == "mhpmcounter28h") {
        return std::make_unique<decode_mhpmcounter28h>();
    }

    if (reg_name == "mhpmcounter29") {
        return std::make_unique<decode_mhpmcounter29>();
    }

    if (reg_name == "mhpmcounter29h") {
        return std::make_unique<decode_mhpmcounter29h>();
    }

    if (reg_name == "mhpmcounter3") {
        return std::make_unique<decode_mhpmcounter3>();
    }

    if (reg_name == "mhpmcounter30") {
        return std::make_unique<decode_mhpmcounter30>();
    }

    if (reg_name == "mhpmcounter30h") {
        return std::make_unique<decode_mhpmcounter30h>();
    }

    if (reg_name == "mhpmcounter31") {
        return std::make_unique<decode_mhpmcounter31>();
    }

    if (reg_name == "mhpmcounter31h") {
        return std::make_unique<decode_mhpmcounter31h>();
    }

    if (reg_name == "mhpmcounter3h") {
        return std::make_unique<decode_mhpmcounter3h>();
    }

    if (reg_name == "mhpmcounter4") {
        return std::make_unique<decode_mhpmcounter4>();
    }

    if (reg_name == "mhpmcounter4h") {
        return std::make_unique<decode_mhpmcounter4h>();
    }

    if (reg_name == "mhpmcounter5") {
        return std::make_unique<decode_mhpmcounter5>();
    }

    if (reg_name == "mhpmcounter5h") {
        return std::make_unique<decode_mhpmcounter5h>();
    }

    if (reg_name == "mhpmcounter6") {
        return std::make_unique<decode_mhpmcounter6>();
    }

    if (reg_name == "mhpmcounter6h") {
        return std::make_unique<decode_mhpmcounter6h>();
    }

    if (reg_name == "mhpmcounter7") {
        return std::make_unique<decode_mhpmcounter7>();
    }

    if (reg_name == "mhpmcounter7h") {
        return std::make_unique<decode_mhpmcounter7h>();
    }

    if (reg_name == "mhpmcounter8") {
        return std::make_unique<decode_mhpmcounter8>();
    }

    if (reg_name == "mhpmcounter8h") {
        return std::make_unique<decode_mhpmcounter8h>();
    }

    if (reg_name == "mhpmcounter9") {
        return std::make_unique<decode_mhpmcounter9>();
    }

    if (reg_name == "mhpmcounter9h") {
        return std::make_unique<decode_mhpmcounter9h>();
    }

    if (reg_name == "mhpmevent10") {
        return std::make_unique<decode_mhpmevent10>();
    }

    if (reg_name == "mhpmevent11") {
        return std::make_unique<decode_mhpmevent11>();
    }

    if (reg_name == "mhpmevent12") {
        return std::make_unique<decode_mhpmevent12>();
    }

    if (reg_name == "mhpmevent13") {
        return std::make_unique<decode_mhpmevent13>();
    }

    if (reg_name == "mhpmevent14") {
        return std::make_unique<decode_mhpmevent14>();
    }

    if (reg_name == "mhpmevent15") {
        return std::make_unique<decode_mhpmevent15>();
    }

    if (reg_name == "mhpmevent16") {
        return std::make_unique<decode_mhpmevent16>();
    }

    if (reg_name == "mhpmevent17") {
        return std::make_unique<decode_mhpmevent17>();
    }

    if (reg_name == "mhpmevent18") {
        return std::make_unique<decode_mhpmevent18>();
    }

    if (reg_name == "mhpmevent19") {
        return std::make_unique<decode_mhpmevent19>();
    }

    if (reg_name == "mhpmevent20") {
        return std::make_unique<decode_mhpmevent20>();
    }

    if (reg_name == "mhpmevent21") {
        return std::make_unique<decode_mhpmevent21>();
    }

    if (reg_name == "mhpmevent22") {
        return std::make_unique<decode_mhpmevent22>();
    }

    if (reg_name == "mhpmevent23") {
        return std::make_unique<decode_mhpmevent23>();
    }

    if (reg_name == "mhpmevent24") {
        return std::make_unique<decode_mhpmevent24>();
    }

    if (reg_name == "mhpmevent25") {
        return std::make_unique<decode_mhpmevent25>();
    }

    if (reg_name == "mhpmevent26") {
        return std::make_unique<decode_mhpmevent26>();
    }

    if (reg_name == "mhpmevent27") {
        return std::make_unique<decode_mhpmevent27>();
    }

    if (reg_name == "mhpmevent28") {
        return std::make_unique<decode_mhpmevent28>();
    }

    if (reg_name == "mhpmevent29") {
        return std::make_unique<decode_mhpmevent29>();
    }

    if (reg_name == "mhpmevent3") {
        return std::make_unique<decode_mhpmevent3>();
    }

    if (reg_name == "mhpmevent30") {
        return std::make_unique<decode_mhpmevent30>();
    }

    if (reg_name == "mhpmevent31") {
        return std::make_unique<decode_mhpmevent31>();
    }

    if (reg_name == "mhpmevent4") {
        return std::make_unique<decode_mhpmevent4>();
    }

    if (reg_name == "mhpmevent5") {
        return std::make_unique<decode_mhpmevent5>();
    }

    if (reg_name == "mhpmevent6") {
        return std::make_unique<decode_mhpmevent6>();
    }

    if (reg_name == "mhpmevent7") {
        return std::make_unique<decode_mhpmevent7>();
    }

    if (reg_name == "mhpmevent8") {
        return std::make_unique<decode_mhpmevent8>();
    }

    if (reg_name == "mhpmevent9") {
        return std::make_unique<decode_mhpmevent9>();
    }

    if (reg_name == "mibase") {
        return std::make_unique<decode_mibase>();
    }

    if (reg_name == "mibound") {
        return std::make_unique<decode_mibound>();
    }

    if (reg_name == "mideleg") {
        return std::make_unique<decode_mideleg>();
    }

    if (reg_name == "mie") {
        return std::make_unique<decode_mie>();
    }

    if (reg_name == "mimpid") {
        return std::make_unique<decode_mimpid>();
    }

    if (reg_name == "minstret") {
        return std::make_unique<decode_minstret>();
    }

    if (reg_name == "minstreth") {
        return std::make_unique<decode_minstreth>();
    }

    if (reg_name == "mintstatus") {
        return std::make_unique<decode_mintstatus>();
    }

    if (reg_name == "mip") {
        return std::make_unique<decode_mip>();
    }

    if (reg_name == "misa") {
        return std::make_unique<decode_misa>();
    }

    if (reg_name == "mnxti") {
        return std::make_unique<decode_mnxti>();
    }

    if (reg_name == "mscratch") {
        return std::make_unique<decode_mscratch>();
    }

    if (reg_name == "mscratchcsw") {
        return std::make_unique<decode_mscratchcsw>();
    }

    if (reg_name == "mscratchcswl") {
        return std::make_unique<decode_mscratchcswl>();
    }

    if (reg_name == "mseccfg") {
        return std::make_unique<decode_mseccfg>();
    }

    if (reg_name == "mseccfgh") {
        return std::make_unique<decode_mseccfgh>();
    }

    if (reg_name == "mstatus") {
        return std::make_unique<decode_mstatus>();
    }

    if (reg_name == "mstatush") {
        return std::make_unique<decode_mstatush>();
    }

    if (reg_name == "mtime") {
        return std::make_unique<decode_mtime>();
    }

    if (reg_name == "mtimecmp") {
        return std::make_unique<decode_mtimecmp>();
    }

    if (reg_name == "mtinst") {
        return std::make_unique<decode_mtinst>();
    }

    if (reg_name == "mtval") {
        return std::make_unique<decode_mtval>();
    }

    if (reg_name == "mtval2") {
        return std::make_unique<decode_mtval2>();
    }

    if (reg_name == "mtvec") {
        return std::make_unique<decode_mtvec>();
    }

    if (reg_name == "mtvt") {
        return std::make_unique<decode_mtvt>();
    }

    if (reg_name == "mvendorid") {
        return std::make_unique<decode_mvendorid>();
    }

    if (reg_name == "pmpaddr0") {
        return std::make_unique<decode_pmpaddr0>();
    }

    if (reg_name == "pmpaddr1") {
        return std::make_unique<decode_pmpaddr1>();
    }

    if (reg_name == "pmpaddr10") {
        return std::make_unique<decode_pmpaddr10>();
    }

    if (reg_name == "pmpaddr11") {
        return std::make_unique<decode_pmpaddr11>();
    }

    if (reg_name == "pmpaddr12") {
        return std::make_unique<decode_pmpaddr12>();
    }

    if (reg_name == "pmpaddr13") {
        return std::make_unique<decode_pmpaddr13>();
    }

    if (reg_name == "pmpaddr14") {
        return std::make_unique<decode_pmpaddr14>();
    }

    if (reg_name == "pmpaddr15") {
        return std::make_unique<decode_pmpaddr15>();
    }

    if (reg_name == "pmpaddr2") {
        return std::make_unique<decode_pmpaddr2>();
    }

    if (reg_name == "pmpaddr3") {
        return std::make_unique<decode_pmpaddr3>();
    }

    if (reg_name == "pmpaddr4") {
        return std::make_unique<decode_pmpaddr4>();
    }

    if (reg_name == "pmpaddr5") {
        return std::make_unique<decode_pmpaddr5>();
    }

    if (reg_name == "pmpaddr6") {
        return std::make_unique<decode_pmpaddr6>();
    }

    if (reg_name == "pmpaddr63") {
        return std::make_unique<decode_pmpaddr63>();
    }

    if (reg_name == "pmpaddr7") {
        return std::make_unique<decode_pmpaddr7>();
    }

    if (reg_name == "pmpaddr8") {
        return std::make_unique<decode_pmpaddr8>();
    }

    if (reg_name == "pmpaddr9") {
        return std::make_unique<decode_pmpaddr9>();
    }

    if (reg_name == "pmpcfg0") {
        return std::make_unique<decode_pmpcfg0>();
    }

    if (reg_name == "pmpcfg1") {
        return std::make_unique<decode_pmpcfg1>();
    }

    if (reg_name == "pmpcfg14") {
        return std::make_unique<decode_pmpcfg14>();
    }

    if (reg_name == "pmpcfg15") {
        return std::make_unique<decode_pmpcfg15>();
    }

    if (reg_name == "pmpcfg2") {
        return std::make_unique<decode_pmpcfg2>();
    }

    if (reg_name == "pmpcfg3") {
        return std::make_unique<decode_pmpcfg3>();
    }

    if (reg_name == "satp") {
        return std::make_unique<decode_satp>();
    }

    if (reg_name == "scause") {
        return std::make_unique<decode_scause>();
    }

    if (reg_name == "scontext") {
        return std::make_unique<decode_scontext>();
    }

    if (reg_name == "scounteren") {
        return std::make_unique<decode_scounteren>();
    }

    if (reg_name == "sedeleg") {
        return std::make_unique<decode_sedeleg>();
    }

    if (reg_name == "senvcfg") {
        return std::make_unique<decode_senvcfg>();
    }

    if (reg_name == "sepc") {
        return std::make_unique<decode_sepc>();
    }

    if (reg_name == "sideleg") {
        return std::make_unique<decode_sideleg>();
    }

    if (reg_name == "sie") {
        return std::make_unique<decode_sie>();
    }

    if (reg_name == "sintstatus") {
        return std::make_unique<decode_sintstatus>();
    }

    if (reg_name == "sip") {
        return std::make_unique<decode_sip>();
    }

    if (reg_name == "snxti") {
        return std::make_unique<decode_snxti>();
    }

    if (reg_name == "sscratch") {
        return std::make_unique<decode_sscratch>();
    }

    if (reg_name == "sscratchcsw") {
        return std::make_unique<decode_sscratchcsw>();
    }

    if (reg_name == "sscratchcswl") {
        return std::make_unique<decode_sscratchcswl>();
    }

    if (reg_name == "sstatus") {
        return std::make_unique<decode_sstatus>();
    }

    if (reg_name == "stval") {
        return std::make_unique<decode_stval>();
    }

    if (reg_name == "stvec") {
        return std::make_unique<decode_stvec>();
    }

    if (reg_name == "stvt") {
        return std::make_unique<decode_stvt>();
    }

    if (reg_name == "tdata1") {
        return std::make_unique<decode_tdata1>();
    }

    if (reg_name == "tdata2") {
        return std::make_unique<decode_tdata2>();
    }

    if (reg_name == "tdata3") {
        return std::make_unique<decode_tdata3>();
    }

    if (reg_name == "time") {
        return std::make_unique<decode_time>();
    }

    if (reg_name == "timeh") {
        return std::make_unique<decode_timeh>();
    }

    if (reg_name == "tselect") {
        return std::make_unique<decode_tselect>();
    }

    if (reg_name == "ucause") {
        return std::make_unique<decode_ucause>();
    }

    if (reg_name == "uepc") {
        return std::make_unique<decode_uepc>();
    }

    if (reg_name == "uie") {
        return std::make_unique<decode_uie>();
    }

    if (reg_name == "uintstatus") {
        return std::make_unique<decode_uintstatus>();
    }

    if (reg_name == "uip") {
        return std::make_unique<decode_uip>();
    }

    if (reg_name == "unxti") {
        return std::make_unique<decode_unxti>();
    }

    if (reg_name == "uscratch") {
        return std::make_unique<decode_uscratch>();
    }

    if (reg_name == "uscratchcsw") {
        return std::make_unique<decode_uscratchcsw>();
    }

    if (reg_name == "uscratchcswl") {
        return std::make_unique<decode_uscratchcswl>();
    }

    if (reg_name == "ustatus") {
        return std::make_unique<decode_ustatus>();
    }

    if (reg_name == "utval") {
        return std::make_unique<decode_utval>();
    }

    if (reg_name == "utvec") {
        return std::make_unique<decode_utvec>();
    }

    if (reg_name == "utvt") {
        return std::make_unique<decode_utvt>();
    }

    if (reg_name == "vl") {
        return std::make_unique<decode_vl>();
    }

    if (reg_name == "vsatp") {
        return std::make_unique<decode_vsatp>();
    }

    if (reg_name == "vscause") {
        return std::make_unique<decode_vscause>();
    }

    if (reg_name == "vsepc") {
        return std::make_unique<decode_vsepc>();
    }

    if (reg_name == "vsie") {
        return std::make_unique<decode_vsie>();
    }

    if (reg_name == "vsip") {
        return std::make_unique<decode_vsip>();
    }

    if (reg_name == "vsscratch") {
        return std::make_unique<decode_vsscratch>();
    }

    if (reg_name == "vsstatus") {
        return std::make_unique<decode_vsstatus>();
    }

    if (reg_name == "vstart") {
        return std::make_unique<decode_vstart>();
    }

    if (reg_name == "vstval") {
        return std::make_unique<decode_vstval>();
    }

    if (reg_name == "vstvec") {
        return std::make_unique<decode_vstvec>();
    }

    if (reg_name == "vtype") {
        return std::make_unique<decode_vtype>();
    }

    if (reg_name == "vxrm") {
        return std::make_unique<decode_vxrm>();
    }

    if (reg_name == "vxsat") {
        return std::make_unique<decode_vxsat>();
    }

    throw std::invalid_argument(std::string("ERROR: unknown register: ") + reg_name);
}
