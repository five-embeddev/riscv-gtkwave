// See LICENSE for license details.

#include <string>
#include <stdexcept>
#include <sstream>

#include "decode_factory.hpp"
#include "decode_regs.hpp"

namespace {
    constexpr uint64_t uxlen=64;
    constexpr uint64_t mxlen=64;
    constexpr uint64_t sxlen=64;
    constexpr uint64_t MSB_MAX_MASK=0xFFFFFFFFFFFFFFFFull;
    constexpr uint64_t LSB_MAX_MASK=0x8000000000000000ull;
    constexpr uint64_t make_mask(unsigned int msb, unsigned int lsb) {
        const uint64_t msb_mask = (msb==64) ? MSB_MAX_MASK : ((1ull<<msb)-1);
        const uint64_t lsb_mask = (lsb==64) ? LSB_MAX_MASK : ((1ull<<lsb));
        return msb_mask - lsb_mask;
    }
}
std::string decode_bsatp::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_bscause::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_bsepc::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_bsie::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_bsip::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_bsscratch::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_bsstatus::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_bstval::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_bstvec::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_cycle::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_cycleh::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_dcsr::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_dpc::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_dscratch::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_dscratch0::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_dscratch1::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_fcsr::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_fflags::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_frm::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hcontext::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hcounteren::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hedeleg::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_henvcfg::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_henvcfgh::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hgatp::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hgeie::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hgeip::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hideleg::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hie::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hip::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter10::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter10h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter11::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter11h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter12::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter12h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter13::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter13h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter14::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter14h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter15::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter15h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter16::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter16h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter17::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter17h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter18::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter18h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter19::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter19h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter20::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter20h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter21::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter21h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter22::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter22h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter23::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter23h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter24::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter24h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter25::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter25h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter26::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter26h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter27::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter27h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter28::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter28h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter29::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter29h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter3::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter30::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter30h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter31::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter31h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter3h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter4::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter4h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter5::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter5h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter6::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter6h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter7::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter7h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter8::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter8h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter9::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hpmcounter9h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hstatus::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_htimedelta::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_htimedeltah::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_htinst::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_htval::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_hvip::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_instret::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_instreth::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_marchid::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mbase::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mbound::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mcause::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // interrupt
    // Interrupt (1) or Trap (0)
    {
        
        
        // mxlen-1:mxlen-1
        constexpr auto mask = make_mask(mxlen-1, mxlen-1);
        constexpr auto len = (mxlen-1+1)- (mxlen-1);
        const uint64_t field_v = ((reg_v & mask) >> (mxlen-1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "interrupt|";
            }
        } else {
            out << "interrupt=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // interrupt_code
    // Code identifying the last interrupt
    {
        
        
        // mxlen-2:mxlen-2
        constexpr auto mask = make_mask(mxlen-2, mxlen-2);
        constexpr auto len = (mxlen-2+1)- (mxlen-2);
        const uint64_t field_v = ((reg_v & mask) >> (mxlen-2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "interrupt_code|";
            }
        } else {
            out << "interrupt_code=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // exception_code
    // Code identifying the last exception.
    {
        
        
        // mxlen-2:mxlen-2
        constexpr auto mask = make_mask(mxlen-2, mxlen-2);
        constexpr auto len = (mxlen-2+1)- (mxlen-2);
        const uint64_t field_v = ((reg_v & mask) >> (mxlen-2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "exception_code|";
            }
        } else {
            out << "exception_code=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mconfigptr::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mcontext::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mcounteren::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // cy
    // Prevent access to 'cycle' counter from lower priveledge level
    {
        
        
        // 0:0
        constexpr auto mask = make_mask(0, 0);
        constexpr auto len = (0+1)- (0);
        const uint64_t field_v = ((reg_v & mask) >> (0));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "cy|";
            }
        } else {
            out << "cy=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // tm
    // Prevent access to 'time' counter from lower priveledge level
    {
        
        
        // 1:1
        constexpr auto mask = make_mask(1, 1);
        constexpr auto len = (1+1)- (1);
        const uint64_t field_v = ((reg_v & mask) >> (1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "tm|";
            }
        } else {
            out << "tm=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // ir
    // Prevent access to 'instret' counter from lower priveledge level
    {
        
        
        // 2:2
        constexpr auto mask = make_mask(2, 2);
        constexpr auto len = (2+1)- (2);
        const uint64_t field_v = ((reg_v & mask) >> (2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "ir|";
            }
        } else {
            out << "ir=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // hpm
    // Prevent access to 'hpm3' to 'hpm31' counter from lower priveledge level
    {
        
        
        // 31:3
        constexpr auto mask = make_mask(31, 3);
        constexpr auto len = (31+1)- (3);
        const uint64_t field_v = ((reg_v & mask) >> (3));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "hpm|";
            }
        } else {
            out << "hpm=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mcountinhibit::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // cy
    // Disable incrementing the 'cycle' counter
    {
        
        
        // 0:0
        constexpr auto mask = make_mask(0, 0);
        constexpr auto len = (0+1)- (0);
        const uint64_t field_v = ((reg_v & mask) >> (0));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "cy|";
            }
        } else {
            out << "cy=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // ir
    // Disable incrementing the 'instret' counter
    {
        
        
        // 2:2
        constexpr auto mask = make_mask(2, 2);
        constexpr auto len = (2+1)- (2);
        const uint64_t field_v = ((reg_v & mask) >> (2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "ir|";
            }
        } else {
            out << "ir=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // hpm
    // Disable incrementing the 'hpm3' to 'hpm31' counter.
    {
        
        
        // 31:3
        constexpr auto mask = make_mask(31, 3);
        constexpr auto len = (31+1)- (3);
        const uint64_t field_v = ((reg_v & mask) >> (3));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "hpm|";
            }
        } else {
            out << "hpm=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mcycle::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mcycleh::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mdbase::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mdbound::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_medeleg::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_menvcfg::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_menvcfgh::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mepc::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhartid::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter10::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter10h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter11::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter11h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter12::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter12h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter13::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter13h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter14::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter14h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter15::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter15h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter16::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter16h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter17::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter17h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter18::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter18h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter19::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter19h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter20::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter20h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter21::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter21h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter22::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter22h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter23::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter23h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter24::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter24h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter25::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter25h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter26::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter26h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter27::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter27h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter28::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter28h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter29::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter29h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter3::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter30::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter30h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter31::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter31h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter3h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter4::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter4h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter5::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter5h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter6::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter6h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter7::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter7h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter8::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter8h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter9::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmcounter9h::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent10::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent11::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent12::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent13::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent14::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent15::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent16::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent17::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent18::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent19::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent20::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent21::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent22::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent23::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent24::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent25::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent26::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent27::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent28::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent29::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent3::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent30::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent31::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent4::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent5::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent6::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent7::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent8::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mhpmevent9::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mibase::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mibound::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mideleg::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mie::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // msi
    // Interrupt enable: Machine Software Interrupt
    {
        
        
        // 3:3
        constexpr auto mask = make_mask(3, 3);
        constexpr auto len = (3+1)- (3);
        const uint64_t field_v = ((reg_v & mask) >> (3));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "msi|";
            }
        } else {
            out << "msi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mti
    // Interrupt enable: Machine Timer Interrupt
    {
        
        
        // 7:7
        constexpr auto mask = make_mask(7, 7);
        constexpr auto len = (7+1)- (7);
        const uint64_t field_v = ((reg_v & mask) >> (7));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mti|";
            }
        } else {
            out << "mti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mei
    // Interrupt enable: Machine External Interrupt
    {
        
        
        // 11:11
        constexpr auto mask = make_mask(11, 11);
        constexpr auto len = (11+1)- (11);
        const uint64_t field_v = ((reg_v & mask) >> (11));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mei|";
            }
        } else {
            out << "mei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // ssi
    // Interrupt enable: Supervisor Software Interrupt
    {
        
        
        // 1:1
        constexpr auto mask = make_mask(1, 1);
        constexpr auto len = (1+1)- (1);
        const uint64_t field_v = ((reg_v & mask) >> (1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "ssi|";
            }
        } else {
            out << "ssi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sti
    // Interrupt enable: Supervisor Timer Interrupt
    {
        
        
        // 5:5
        constexpr auto mask = make_mask(5, 5);
        constexpr auto len = (5+1)- (5);
        const uint64_t field_v = ((reg_v & mask) >> (5));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sti|";
            }
        } else {
            out << "sti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sei
    // Interrupt enable: Supervisor External Interrupt
    {
        
        
        // 9:9
        constexpr auto mask = make_mask(9, 9);
        constexpr auto len = (9+1)- (9);
        const uint64_t field_v = ((reg_v & mask) >> (9));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sei|";
            }
        } else {
            out << "sei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // usi
    // Interrupt enable: User Software Interrupt
    {
        
        
        // 0:0
        constexpr auto mask = make_mask(0, 0);
        constexpr auto len = (0+1)- (0);
        const uint64_t field_v = ((reg_v & mask) >> (0));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "usi|";
            }
        } else {
            out << "usi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uti
    // Interrupt enable: User Timer Interrupt
    {
        
        
        // 4:4
        constexpr auto mask = make_mask(4, 4);
        constexpr auto len = (4+1)- (4);
        const uint64_t field_v = ((reg_v & mask) >> (4));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uti|";
            }
        } else {
            out << "uti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uei
    // Interrupt enable: User External Interrupt
    {
        
        
        // 8:8
        constexpr auto mask = make_mask(8, 8);
        constexpr auto len = (8+1)- (8);
        const uint64_t field_v = ((reg_v & mask) >> (8));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uei|";
            }
        } else {
            out << "uei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined16
    // Interrupt enable: Optional platform defined interrupt source 0.
    {
        
        
        // 16:16
        constexpr auto mask = make_mask(16, 16);
        constexpr auto len = (16+1)- (16);
        const uint64_t field_v = ((reg_v & mask) >> (16));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined16|";
            }
        } else {
            out << "platform_defined16=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined17
    // Interrupt enable: Optional platform defined interrupt source 1
    {
        
        
        // 17:17
        constexpr auto mask = make_mask(17, 17);
        constexpr auto len = (17+1)- (17);
        const uint64_t field_v = ((reg_v & mask) >> (17));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined17|";
            }
        } else {
            out << "platform_defined17=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined18
    // Interrupt enable: Optional platform defined interrupt source 2
    {
        
        
        // 18:18
        constexpr auto mask = make_mask(18, 18);
        constexpr auto len = (18+1)- (18);
        const uint64_t field_v = ((reg_v & mask) >> (18));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined18|";
            }
        } else {
            out << "platform_defined18=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined19
    // Interrupt enable: Optional platform defined interrupt source 3
    {
        
        
        // 19:19
        constexpr auto mask = make_mask(19, 19);
        constexpr auto len = (19+1)- (19);
        const uint64_t field_v = ((reg_v & mask) >> (19));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined19|";
            }
        } else {
            out << "platform_defined19=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined20
    // Interrupt enable: Optional platform defined interrupt source 4
    {
        
        
        // 20:20
        constexpr auto mask = make_mask(20, 20);
        constexpr auto len = (20+1)- (20);
        const uint64_t field_v = ((reg_v & mask) >> (20));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined20|";
            }
        } else {
            out << "platform_defined20=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined21
    // Interrupt enable: Optional platform defined interrupt source 5
    {
        
        
        // 21:21
        constexpr auto mask = make_mask(21, 21);
        constexpr auto len = (21+1)- (21);
        const uint64_t field_v = ((reg_v & mask) >> (21));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined21|";
            }
        } else {
            out << "platform_defined21=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined22
    // Interrupt enable: Optional platform defined interrupt source 6
    {
        
        
        // 22:22
        constexpr auto mask = make_mask(22, 22);
        constexpr auto len = (22+1)- (22);
        const uint64_t field_v = ((reg_v & mask) >> (22));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined22|";
            }
        } else {
            out << "platform_defined22=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined23
    // Interrupt enable: Optional platform defined interrupt source 7
    {
        
        
        // 23:23
        constexpr auto mask = make_mask(23, 23);
        constexpr auto len = (23+1)- (23);
        const uint64_t field_v = ((reg_v & mask) >> (23));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined23|";
            }
        } else {
            out << "platform_defined23=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined24
    // Interrupt enable: Optional platform defined interrupt source 8
    {
        
        
        // 24:24
        constexpr auto mask = make_mask(24, 24);
        constexpr auto len = (24+1)- (24);
        const uint64_t field_v = ((reg_v & mask) >> (24));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined24|";
            }
        } else {
            out << "platform_defined24=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined25
    // Interrupt enable: Optional platform defined interrupt source 9
    {
        
        
        // 25:25
        constexpr auto mask = make_mask(25, 25);
        constexpr auto len = (25+1)- (25);
        const uint64_t field_v = ((reg_v & mask) >> (25));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined25|";
            }
        } else {
            out << "platform_defined25=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined26
    // Interrupt enable: Optional platform defined interrupt source 10
    {
        
        
        // 26:26
        constexpr auto mask = make_mask(26, 26);
        constexpr auto len = (26+1)- (26);
        const uint64_t field_v = ((reg_v & mask) >> (26));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined26|";
            }
        } else {
            out << "platform_defined26=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined27
    // Interrupt enable: Optional platform defined interrupt source 11
    {
        
        
        // 27:27
        constexpr auto mask = make_mask(27, 27);
        constexpr auto len = (27+1)- (27);
        const uint64_t field_v = ((reg_v & mask) >> (27));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined27|";
            }
        } else {
            out << "platform_defined27=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined28
    // Interrupt enable: Optional platform defined interrupt source 12
    {
        
        
        // 28:28
        constexpr auto mask = make_mask(28, 28);
        constexpr auto len = (28+1)- (28);
        const uint64_t field_v = ((reg_v & mask) >> (28));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined28|";
            }
        } else {
            out << "platform_defined28=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined29
    // Interrupt enable: Optional platform defined interrupt source 13
    {
        
        
        // 29:29
        constexpr auto mask = make_mask(29, 29);
        constexpr auto len = (29+1)- (29);
        const uint64_t field_v = ((reg_v & mask) >> (29));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined29|";
            }
        } else {
            out << "platform_defined29=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined30
    // Interrupt enable: Optional platform defined interrupt source 14
    {
        
        
        // 30:30
        constexpr auto mask = make_mask(30, 30);
        constexpr auto len = (30+1)- (30);
        const uint64_t field_v = ((reg_v & mask) >> (30));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined30|";
            }
        } else {
            out << "platform_defined30=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined31
    // Interrupt enable: Optional platform defined interrupt source 15
    {
        
        
        // 31:31
        constexpr auto mask = make_mask(31, 31);
        constexpr auto len = (31+1)- (31);
        const uint64_t field_v = ((reg_v & mask) >> (31));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined31|";
            }
        } else {
            out << "platform_defined31=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mimpid::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_minstret::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_minstreth::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mintstatus::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mip::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // msi
    // Interrupt pending: Machine Software Interrupt
    {
        
        
        // 3:3
        constexpr auto mask = make_mask(3, 3);
        constexpr auto len = (3+1)- (3);
        const uint64_t field_v = ((reg_v & mask) >> (3));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "msi|";
            }
        } else {
            out << "msi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mti
    // Interrupt pending: Machine Timer Interrupt
    {
        
        
        // 7:7
        constexpr auto mask = make_mask(7, 7);
        constexpr auto len = (7+1)- (7);
        const uint64_t field_v = ((reg_v & mask) >> (7));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mti|";
            }
        } else {
            out << "mti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mei
    // Interrupt pending: Machine External Interrupt
    {
        
        
        // 11:11
        constexpr auto mask = make_mask(11, 11);
        constexpr auto len = (11+1)- (11);
        const uint64_t field_v = ((reg_v & mask) >> (11));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mei|";
            }
        } else {
            out << "mei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // ssi
    // Interrupt pending: Supervisor Software Interrupt
    {
        
        
        // 1:1
        constexpr auto mask = make_mask(1, 1);
        constexpr auto len = (1+1)- (1);
        const uint64_t field_v = ((reg_v & mask) >> (1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "ssi|";
            }
        } else {
            out << "ssi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sti
    // Interrupt pending: Supervisor Timer Interrupt
    {
        
        
        // 5:5
        constexpr auto mask = make_mask(5, 5);
        constexpr auto len = (5+1)- (5);
        const uint64_t field_v = ((reg_v & mask) >> (5));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sti|";
            }
        } else {
            out << "sti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sei
    // Interrupt pending: Supervisor External Interrupt
    {
        
        
        // 9:9
        constexpr auto mask = make_mask(9, 9);
        constexpr auto len = (9+1)- (9);
        const uint64_t field_v = ((reg_v & mask) >> (9));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sei|";
            }
        } else {
            out << "sei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // usi
    // Interrupt pending: User Software Interrupt
    {
        
        
        // 0:0
        constexpr auto mask = make_mask(0, 0);
        constexpr auto len = (0+1)- (0);
        const uint64_t field_v = ((reg_v & mask) >> (0));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "usi|";
            }
        } else {
            out << "usi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uti
    // Interrupt pending: User Timer Interrupt
    {
        
        
        // 4:4
        constexpr auto mask = make_mask(4, 4);
        constexpr auto len = (4+1)- (4);
        const uint64_t field_v = ((reg_v & mask) >> (4));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uti|";
            }
        } else {
            out << "uti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uei
    // Interrupt pending: User External Interrupt
    {
        
        
        // 8:8
        constexpr auto mask = make_mask(8, 8);
        constexpr auto len = (8+1)- (8);
        const uint64_t field_v = ((reg_v & mask) >> (8));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uei|";
            }
        } else {
            out << "uei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined16
    // Interrupt pending: Optional platform defined interrupt source 0.
    {
        
        
        // 16:16
        constexpr auto mask = make_mask(16, 16);
        constexpr auto len = (16+1)- (16);
        const uint64_t field_v = ((reg_v & mask) >> (16));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined16|";
            }
        } else {
            out << "platform_defined16=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined17
    // Interrupt pending: Optional platform defined interrupt source 1
    {
        
        
        // 17:17
        constexpr auto mask = make_mask(17, 17);
        constexpr auto len = (17+1)- (17);
        const uint64_t field_v = ((reg_v & mask) >> (17));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined17|";
            }
        } else {
            out << "platform_defined17=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined18
    // Interrupt pending: Optional platform defined interrupt source 2
    {
        
        
        // 18:18
        constexpr auto mask = make_mask(18, 18);
        constexpr auto len = (18+1)- (18);
        const uint64_t field_v = ((reg_v & mask) >> (18));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined18|";
            }
        } else {
            out << "platform_defined18=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined19
    // Interrupt pending: Optional platform defined interrupt source 3
    {
        
        
        // 19:19
        constexpr auto mask = make_mask(19, 19);
        constexpr auto len = (19+1)- (19);
        const uint64_t field_v = ((reg_v & mask) >> (19));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined19|";
            }
        } else {
            out << "platform_defined19=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined20
    // Interrupt pending: Optional platform defined interrupt source 4
    {
        
        
        // 20:20
        constexpr auto mask = make_mask(20, 20);
        constexpr auto len = (20+1)- (20);
        const uint64_t field_v = ((reg_v & mask) >> (20));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined20|";
            }
        } else {
            out << "platform_defined20=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined21
    // Interrupt pending: Optional platform defined interrupt source 5
    {
        
        
        // 21:21
        constexpr auto mask = make_mask(21, 21);
        constexpr auto len = (21+1)- (21);
        const uint64_t field_v = ((reg_v & mask) >> (21));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined21|";
            }
        } else {
            out << "platform_defined21=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined22
    // Interrupt pending: Optional platform defined interrupt source 6
    {
        
        
        // 22:22
        constexpr auto mask = make_mask(22, 22);
        constexpr auto len = (22+1)- (22);
        const uint64_t field_v = ((reg_v & mask) >> (22));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined22|";
            }
        } else {
            out << "platform_defined22=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined23
    // Interrupt pending: Optional platform defined interrupt source 7
    {
        
        
        // 23:23
        constexpr auto mask = make_mask(23, 23);
        constexpr auto len = (23+1)- (23);
        const uint64_t field_v = ((reg_v & mask) >> (23));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined23|";
            }
        } else {
            out << "platform_defined23=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined24
    // Interrupt pending: Optional platform defined interrupt source 8
    {
        
        
        // 24:24
        constexpr auto mask = make_mask(24, 24);
        constexpr auto len = (24+1)- (24);
        const uint64_t field_v = ((reg_v & mask) >> (24));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined24|";
            }
        } else {
            out << "platform_defined24=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined25
    // Interrupt pending: Optional platform defined interrupt source 9
    {
        
        
        // 25:25
        constexpr auto mask = make_mask(25, 25);
        constexpr auto len = (25+1)- (25);
        const uint64_t field_v = ((reg_v & mask) >> (25));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined25|";
            }
        } else {
            out << "platform_defined25=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined26
    // Interrupt pending: Optional platform defined interrupt source 10
    {
        
        
        // 26:26
        constexpr auto mask = make_mask(26, 26);
        constexpr auto len = (26+1)- (26);
        const uint64_t field_v = ((reg_v & mask) >> (26));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined26|";
            }
        } else {
            out << "platform_defined26=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined27
    // Interrupt pending: Optional platform defined interrupt source 11
    {
        
        
        // 27:27
        constexpr auto mask = make_mask(27, 27);
        constexpr auto len = (27+1)- (27);
        const uint64_t field_v = ((reg_v & mask) >> (27));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined27|";
            }
        } else {
            out << "platform_defined27=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined28
    // Interrupt pending: Optional platform defined interrupt source 12
    {
        
        
        // 28:28
        constexpr auto mask = make_mask(28, 28);
        constexpr auto len = (28+1)- (28);
        const uint64_t field_v = ((reg_v & mask) >> (28));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined28|";
            }
        } else {
            out << "platform_defined28=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined29
    // Interrupt pending: Optional platform defined interrupt source 13
    {
        
        
        // 29:29
        constexpr auto mask = make_mask(29, 29);
        constexpr auto len = (29+1)- (29);
        const uint64_t field_v = ((reg_v & mask) >> (29));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined29|";
            }
        } else {
            out << "platform_defined29=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined30
    // Interrupt pending: Optional platform defined interrupt source 14
    {
        
        
        // 30:30
        constexpr auto mask = make_mask(30, 30);
        constexpr auto len = (30+1)- (30);
        const uint64_t field_v = ((reg_v & mask) >> (30));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined30|";
            }
        } else {
            out << "platform_defined30=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // platform_defined31
    // Interrupt pending: Optional platform defined interrupt source 15
    {
        
        
        // 31:31
        constexpr auto mask = make_mask(31, 31);
        constexpr auto len = (31+1)- (31);
        const uint64_t field_v = ((reg_v & mask) >> (31));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "platform_defined31|";
            }
        } else {
            out << "platform_defined31=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_misa::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // mxl
    // Encodes the native base integer ISA width.
    {
        
        
        // mxlen-1:mxlen-2
        constexpr auto mask = make_mask(mxlen-1, mxlen-2);
        constexpr auto len = (mxlen-1+1)- (mxlen-2);
        const uint64_t field_v = ((reg_v & mask) >> (mxlen-2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mxl|";
            }
        } else {
            out << "mxl=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // extensions
    // Encodes the presence of the standard extensions, with a single bit per letter of the alphabet (bit 0 encodes presence of extension “A” , bit 1 encodes presence of extension “B”, through to bit 25 which encodes “Z”). The “I” bit will be set for RV32I, RV64I, RV128I base ISAs, and the “E” bit will be set for RV32E.
    {
        
        
        // 25:25
        constexpr auto mask = make_mask(25, 25);
        constexpr auto len = (25+1)- (25);
        const uint64_t field_v = ((reg_v & mask) >> (25));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "extensions|";
            }
        } else {
            out << "extensions=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mnxti::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mscratch::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mscratchcsw::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mscratchcswl::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mseccfg::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mseccfgh::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mstatus::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // sxl
    // Control the value of SXLEN for S-mode.
    {
        
        
        // 35:34
        constexpr auto mask = make_mask(35, 34);
        constexpr auto len = (35+1)- (34);
        const uint64_t field_v = ((reg_v & mask) >> (34));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sxl|";
            }
        } else {
            out << "sxl=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uxl
    // Control the value of UXLEN for U-mode.
    {
        
        
        // 33:32
        constexpr auto mask = make_mask(33, 32);
        constexpr auto len = (33+1)- (32);
        const uint64_t field_v = ((reg_v & mask) >> (32));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uxl|";
            }
        } else {
            out << "uxl=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mbe
    // Control the endianness of memory accesses made from M-mode other than instruction fetches. (Instruction fetches are always little-endian).
    {
        
        
        // 37:37
        constexpr auto mask = make_mask(37, 37);
        constexpr auto len = (37+1)- (37);
        const uint64_t field_v = ((reg_v & mask) >> (37));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mbe|";
            }
        } else {
            out << "mbe=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sbe
    // Control the endianness of memory accesses made from S-mode other than instruction fetches. (Instruction fetches are always little-endian).
    {
        
        
        // 36:36
        constexpr auto mask = make_mask(36, 36);
        constexpr auto len = (36+1)- (36);
        const uint64_t field_v = ((reg_v & mask) >> (36));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sbe|";
            }
        } else {
            out << "sbe=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // ube
    // Control the endianness of memory accesses made from S-mode other than instruction fetches. (Instruction fetches are always little-endian).
    {
        
        
        // 6:6
        constexpr auto mask = make_mask(6, 6);
        constexpr auto len = (6+1)- (6);
        const uint64_t field_v = ((reg_v & mask) >> (6));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "ube|";
            }
        } else {
            out << "ube=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // fs
    // The FS field encodes the status of the floating-point unit state, including the floating-point registers f0–f31 and the CSRs fcsr, frm, and fflags.
    {
        
        
        // 14:13
        constexpr auto mask = make_mask(14, 13);
        constexpr auto len = (14+1)- (13);
        const uint64_t field_v = ((reg_v & mask) >> (13));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "fs|";
            }
        } else {
            out << "fs=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // vs
    // The VS field encodes the status of the vector extension state, including the vector registers v0–v31 and the CSRs vcsr, vxrm, vxsat, vstart, vl, vtype, and vlenb.
    {
        
        
        // 10:9
        constexpr auto mask = make_mask(10, 9);
        constexpr auto len = (10+1)- (9);
        const uint64_t field_v = ((reg_v & mask) >> (9));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "vs|";
            }
        } else {
            out << "vs=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // xs
    // The XS field encodes the status of additional user-mode extensions and associated state.
    {
        
        
        // 16:15
        constexpr auto mask = make_mask(16, 15);
        constexpr auto len = (16+1)- (15);
        const uint64_t field_v = ((reg_v & mask) >> (15));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "xs|";
            }
        } else {
            out << "xs=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sd
    // Read-only bit that summarizes whether either the FS, VS, or XS fields signal the presence of some dirty state that will require saving extended user context to memory.
    {
        
        
        // mxlen-1:mxlen-1
        constexpr auto mask = make_mask(mxlen-1, mxlen-1);
        constexpr auto len = (mxlen-1+1)- (mxlen-1);
        const uint64_t field_v = ((reg_v & mask) >> (mxlen-1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sd|";
            }
        } else {
            out << "sd=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sum
    // The SUM (permit Supervisor User Memory access) bit modifies the privilege with which S-mode loads and stores access virtual memory.
    {
        
        
        // 18:18
        constexpr auto mask = make_mask(18, 18);
        constexpr auto len = (18+1)- (18);
        const uint64_t field_v = ((reg_v & mask) >> (18));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sum|";
            }
        } else {
            out << "sum=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mxr
    // The MXR (Make eXecutable Readable) bit modifies the privilege with which loads access virtual memory.
    {
        
        
        // 19:19
        constexpr auto mask = make_mask(19, 19);
        constexpr auto len = (19+1)- (19);
        const uint64_t field_v = ((reg_v & mask) >> (19));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mxr|";
            }
        } else {
            out << "mxr=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // tvm
    // The TVM (Trap Virtual Memory) bit is a WARL field that supports intercepting supervisor virtual-memory management operations.
    {
        
        
        // 20:20
        constexpr auto mask = make_mask(20, 20);
        constexpr auto len = (20+1)- (20);
        const uint64_t field_v = ((reg_v & mask) >> (20));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "tvm|";
            }
        } else {
            out << "tvm=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // tw
    // The TW (Timeout Wait) bit is a WARL field that supports intercepting the WFI instruction.
    {
        
        
        // 21:21
        constexpr auto mask = make_mask(21, 21);
        constexpr auto len = (21+1)- (21);
        const uint64_t field_v = ((reg_v & mask) >> (21));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "tw|";
            }
        } else {
            out << "tw=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // tsr
    // The TSR (Trap SRET) bit is a WARL field that supports intercepting the supervisor exception return instruction, SRET.
    {
        
        
        // 22:22
        constexpr auto mask = make_mask(22, 22);
        constexpr auto len = (22+1)- (22);
        const uint64_t field_v = ((reg_v & mask) >> (22));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "tsr|";
            }
        } else {
            out << "tsr=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mie
    // Machine Interrupt Enable
    {
        
        
        // 3:3
        constexpr auto mask = make_mask(3, 3);
        constexpr auto len = (3+1)- (3);
        const uint64_t field_v = ((reg_v & mask) >> (3));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mie|";
            }
        } else {
            out << "mie=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sie
    // Supervisor Interrupt Enable
    {
        
        
        // 2:2
        constexpr auto mask = make_mask(2, 2);
        constexpr auto len = (2+1)- (2);
        const uint64_t field_v = ((reg_v & mask) >> (2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sie|";
            }
        } else {
            out << "sie=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mpie
    // Machine Prior Interrupt Enable
    {
        
        
        // 7:7
        constexpr auto mask = make_mask(7, 7);
        constexpr auto len = (7+1)- (7);
        const uint64_t field_v = ((reg_v & mask) >> (7));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mpie|";
            }
        } else {
            out << "mpie=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // spie
    // Supervisor Prior Interrupt Enable
    {
        
        
        // 5:5
        constexpr auto mask = make_mask(5, 5);
        constexpr auto len = (5+1)- (5);
        const uint64_t field_v = ((reg_v & mask) >> (5));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "spie|";
            }
        } else {
            out << "spie=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mprv
    // Modify Privilege
    {
        
        
        // 17:17
        constexpr auto mask = make_mask(17, 17);
        constexpr auto len = (17+1)- (17);
        const uint64_t field_v = ((reg_v & mask) >> (17));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mprv|";
            }
        } else {
            out << "mprv=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mpp
    // Machine Previous Privilege mode. Two-level stack
    {
        
        
        // 12:11
        constexpr auto mask = make_mask(12, 11);
        constexpr auto len = (12+1)- (11);
        const uint64_t field_v = ((reg_v & mask) >> (11));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mpp|";
            }
        } else {
            out << "mpp=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // spp
    // Supervisor Previous Privilege mode
    {
        
        
        // 8:8
        constexpr auto mask = make_mask(8, 8);
        constexpr auto len = (8+1)- (8);
        const uint64_t field_v = ((reg_v & mask) >> (8));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "spp|";
            }
        } else {
            out << "spp=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mstatush::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // mbe
    // Control the endianness of memory accesses made from M-mode other than instruction fetches. (Instruction fetches are always little-endian).
    {
        
        
        // 5:5
        constexpr auto mask = make_mask(5, 5);
        constexpr auto len = (5+1)- (5);
        const uint64_t field_v = ((reg_v & mask) >> (5));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mbe|";
            }
        } else {
            out << "mbe=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sbe
    // Control the endianness of memory accesses made from S-mode other than instruction fetches. (Instruction fetches are always little-endian).
    {
        
        
        // 4:4
        constexpr auto mask = make_mask(4, 4);
        constexpr auto len = (4+1)- (4);
        const uint64_t field_v = ((reg_v & mask) >> (4));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sbe|";
            }
        } else {
            out << "sbe=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mtime::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mtimecmp::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mtinst::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mtval::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mtval2::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mtvec::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // base
    // Base Address
    {
        
        
        // mxlen-1:2
        constexpr auto mask = make_mask(mxlen-1, 2);
        constexpr auto len = (mxlen-1+1)- (2);
        const uint64_t field_v = ((reg_v & mask) >> (2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "base|";
            }
        } else {
            out << "base=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mode
    // Address Mode (Direct or Vectored)
    {
        
        
        // 1:1
        constexpr auto mask = make_mask(1, 1);
        constexpr auto len = (1+1)- (1);
        const uint64_t field_v = ((reg_v & mask) >> (1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mode|";
            }
        } else {
            out << "mode=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mtvt::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_mvendorid::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr0::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr1::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr10::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr11::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr12::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr13::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr14::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr15::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr2::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr3::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr4::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr5::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr6::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr63::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr7::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr8::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpaddr9::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpcfg0::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpcfg1::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpcfg14::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpcfg15::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpcfg2::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_pmpcfg3::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_satp::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_scause::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // interrupt
    // Interrupt (1) or Trap (0)
    {
        
        
        // sxlen-1:sxlen-1
        constexpr auto mask = make_mask(sxlen-1, sxlen-1);
        constexpr auto len = (sxlen-1+1)- (sxlen-1);
        const uint64_t field_v = ((reg_v & mask) >> (sxlen-1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "interrupt|";
            }
        } else {
            out << "interrupt=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // interrupt_code
    // Code identifying the last interrupt
    {
        
        
        // sxlen-2:sxlen-2
        constexpr auto mask = make_mask(sxlen-2, sxlen-2);
        constexpr auto len = (sxlen-2+1)- (sxlen-2);
        const uint64_t field_v = ((reg_v & mask) >> (sxlen-2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "interrupt_code|";
            }
        } else {
            out << "interrupt_code=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // exception_code
    // Code identifying the last exception.
    {
        
        
        // sxlen-2:sxlen-2
        constexpr auto mask = make_mask(sxlen-2, sxlen-2);
        constexpr auto len = (sxlen-2+1)- (sxlen-2);
        const uint64_t field_v = ((reg_v & mask) >> (sxlen-2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "exception_code|";
            }
        } else {
            out << "exception_code=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_scontext::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_scounteren::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_sedeleg::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_senvcfg::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_sepc::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_sideleg::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_sie::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // ssi
    // Interrupt enable: Supervisor Software Interrupt
    {
        
        
        // 1:1
        constexpr auto mask = make_mask(1, 1);
        constexpr auto len = (1+1)- (1);
        const uint64_t field_v = ((reg_v & mask) >> (1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "ssi|";
            }
        } else {
            out << "ssi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sti
    // Interrupt enable: Supervisor Timer Interrupt
    {
        
        
        // 5:5
        constexpr auto mask = make_mask(5, 5);
        constexpr auto len = (5+1)- (5);
        const uint64_t field_v = ((reg_v & mask) >> (5));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sti|";
            }
        } else {
            out << "sti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sei
    // Interrupt enable: Supervisor External Interrupt
    {
        
        
        // 9:9
        constexpr auto mask = make_mask(9, 9);
        constexpr auto len = (9+1)- (9);
        const uint64_t field_v = ((reg_v & mask) >> (9));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sei|";
            }
        } else {
            out << "sei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // usi
    // Interrupt enable: User Software Interrupt
    {
        
        
        // 0:0
        constexpr auto mask = make_mask(0, 0);
        constexpr auto len = (0+1)- (0);
        const uint64_t field_v = ((reg_v & mask) >> (0));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "usi|";
            }
        } else {
            out << "usi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uti
    // Interrupt enable: User Timer Interrupt
    {
        
        
        // 4:4
        constexpr auto mask = make_mask(4, 4);
        constexpr auto len = (4+1)- (4);
        const uint64_t field_v = ((reg_v & mask) >> (4));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uti|";
            }
        } else {
            out << "uti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uei
    // Interrupt enable: User External Interrupt
    {
        
        
        // 8:8
        constexpr auto mask = make_mask(8, 8);
        constexpr auto len = (8+1)- (8);
        const uint64_t field_v = ((reg_v & mask) >> (8));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uei|";
            }
        } else {
            out << "uei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_sintstatus::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_sip::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // ssi
    // Interrupt enable: Supervisor Software Interrupt
    {
        
        
        // 1:1
        constexpr auto mask = make_mask(1, 1);
        constexpr auto len = (1+1)- (1);
        const uint64_t field_v = ((reg_v & mask) >> (1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "ssi|";
            }
        } else {
            out << "ssi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sti
    // Interrupt enable: Supervisor Timer Interrupt
    {
        
        
        // 5:5
        constexpr auto mask = make_mask(5, 5);
        constexpr auto len = (5+1)- (5);
        const uint64_t field_v = ((reg_v & mask) >> (5));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sti|";
            }
        } else {
            out << "sti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sei
    // Interrupt enable: Supervisor External Interrupt
    {
        
        
        // 9:9
        constexpr auto mask = make_mask(9, 9);
        constexpr auto len = (9+1)- (9);
        const uint64_t field_v = ((reg_v & mask) >> (9));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sei|";
            }
        } else {
            out << "sei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // usi
    // Interrupt enable: User Software Interrupt
    {
        
        
        // 0:0
        constexpr auto mask = make_mask(0, 0);
        constexpr auto len = (0+1)- (0);
        const uint64_t field_v = ((reg_v & mask) >> (0));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "usi|";
            }
        } else {
            out << "usi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uti
    // Interrupt enable: User Timer Interrupt
    {
        
        
        // 4:4
        constexpr auto mask = make_mask(4, 4);
        constexpr auto len = (4+1)- (4);
        const uint64_t field_v = ((reg_v & mask) >> (4));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uti|";
            }
        } else {
            out << "uti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uei
    // Interrupt enable: User External Interrupt
    {
        
        
        // 8:8
        constexpr auto mask = make_mask(8, 8);
        constexpr auto len = (8+1)- (8);
        const uint64_t field_v = ((reg_v & mask) >> (8));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uei|";
            }
        } else {
            out << "uei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_snxti::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_sscratch::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_sscratchcsw::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_sscratchcswl::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_sstatus::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // uxl
    // Control the value of UXLEN for U-mode.
    {
        
        
        // 33:32
        constexpr auto mask = make_mask(33, 32);
        constexpr auto len = (33+1)- (32);
        const uint64_t field_v = ((reg_v & mask) >> (32));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uxl|";
            }
        } else {
            out << "uxl=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // sie
    // Supervisor Interrupt Enable
    {
        
        
        // 2:2
        constexpr auto mask = make_mask(2, 2);
        constexpr auto len = (2+1)- (2);
        const uint64_t field_v = ((reg_v & mask) >> (2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "sie|";
            }
        } else {
            out << "sie=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // spie
    // Supervisor Prior Interrupt Enable
    {
        
        
        // 5:5
        constexpr auto mask = make_mask(5, 5);
        constexpr auto len = (5+1)- (5);
        const uint64_t field_v = ((reg_v & mask) >> (5));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "spie|";
            }
        } else {
            out << "spie=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // spp
    // Supervisor Previous Privilege mode
    {
        
        
        // 8:8
        constexpr auto mask = make_mask(8, 8);
        constexpr auto len = (8+1)- (8);
        const uint64_t field_v = ((reg_v & mask) >> (8));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "spp|";
            }
        } else {
            out << "spp=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_stval::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_stvec::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // base
    // Base Address
    {
        
        
        // sxlen-1:2
        constexpr auto mask = make_mask(sxlen-1, 2);
        constexpr auto len = (sxlen-1+1)- (2);
        const uint64_t field_v = ((reg_v & mask) >> (2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "base|";
            }
        } else {
            out << "base=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mode
    // Address Mode (Direct or Vectored)
    {
        
        
        // 1:1
        constexpr auto mask = make_mask(1, 1);
        constexpr auto len = (1+1)- (1);
        const uint64_t field_v = ((reg_v & mask) >> (1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mode|";
            }
        } else {
            out << "mode=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_stvt::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_tdata1::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_tdata2::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_tdata3::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_time::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_timeh::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_tselect::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_ucause::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // interrupt
    // Interrupt (1) or Trap (0)
    {
        
        
        // uxlen-1:uxlen-1
        constexpr auto mask = make_mask(uxlen-1, uxlen-1);
        constexpr auto len = (uxlen-1+1)- (uxlen-1);
        const uint64_t field_v = ((reg_v & mask) >> (uxlen-1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "interrupt|";
            }
        } else {
            out << "interrupt=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // interrupt_code
    // Code identifying the last interrupt
    {
        
        
        // uxlen-2:uxlen-2
        constexpr auto mask = make_mask(uxlen-2, uxlen-2);
        constexpr auto len = (uxlen-2+1)- (uxlen-2);
        const uint64_t field_v = ((reg_v & mask) >> (uxlen-2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "interrupt_code|";
            }
        } else {
            out << "interrupt_code=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // exception_code
    // Code identifying the last exception.
    {
        
        
        // uxlen-2:uxlen-2
        constexpr auto mask = make_mask(uxlen-2, uxlen-2);
        constexpr auto len = (uxlen-2+1)- (uxlen-2);
        const uint64_t field_v = ((reg_v & mask) >> (uxlen-2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "exception_code|";
            }
        } else {
            out << "exception_code=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_uepc::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_uie::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // usi
    // Interrupt enable: User Software Interrupt
    {
        
        
        // 0:0
        constexpr auto mask = make_mask(0, 0);
        constexpr auto len = (0+1)- (0);
        const uint64_t field_v = ((reg_v & mask) >> (0));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "usi|";
            }
        } else {
            out << "usi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uti
    // Interrupt enable: User Timer Interrupt
    {
        
        
        // 4:4
        constexpr auto mask = make_mask(4, 4);
        constexpr auto len = (4+1)- (4);
        const uint64_t field_v = ((reg_v & mask) >> (4));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uti|";
            }
        } else {
            out << "uti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uei
    // Interrupt enable: User External Interrupt
    {
        
        
        // 8:8
        constexpr auto mask = make_mask(8, 8);
        constexpr auto len = (8+1)- (8);
        const uint64_t field_v = ((reg_v & mask) >> (8));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uei|";
            }
        } else {
            out << "uei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_uintstatus::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_uip::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // usi
    // Interrupt pending: User Software Interrupt
    {
        
        
        // 0:0
        constexpr auto mask = make_mask(0, 0);
        constexpr auto len = (0+1)- (0);
        const uint64_t field_v = ((reg_v & mask) >> (0));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "usi|";
            }
        } else {
            out << "usi=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uti
    // Interrupt pending: User Timer Interrupt
    {
        
        
        // 4:4
        constexpr auto mask = make_mask(4, 4);
        constexpr auto len = (4+1)- (4);
        const uint64_t field_v = ((reg_v & mask) >> (4));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uti|";
            }
        } else {
            out << "uti=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // uei
    // Interrupt pending: User External Interrupt
    {
        
        
        // 8:8
        constexpr auto mask = make_mask(8, 8);
        constexpr auto len = (8+1)- (8);
        const uint64_t field_v = ((reg_v & mask) >> (8));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uei|";
            }
        } else {
            out << "uei=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_unxti::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_uscratch::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_uscratchcsw::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_uscratchcswl::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_ustatus::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // uie
    // User Interrupt Enable
    {
        
        
        // 1:1
        constexpr auto mask = make_mask(1, 1);
        constexpr auto len = (1+1)- (1);
        const uint64_t field_v = ((reg_v & mask) >> (1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "uie|";
            }
        } else {
            out << "uie=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // upie
    // User Prior Interrupt Enable
    {
        
        
        // 3:3
        constexpr auto mask = make_mask(3, 3);
        constexpr auto len = (3+1)- (3);
        const uint64_t field_v = ((reg_v & mask) >> (3));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "upie|";
            }
        } else {
            out << "upie=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_utval::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_utvec::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    // base
    // Base Address
    {
        
        
        // uxlen-1:2
        constexpr auto mask = make_mask(uxlen-1, 2);
        constexpr auto len = (uxlen-1+1)- (2);
        const uint64_t field_v = ((reg_v & mask) >> (2));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "base|";
            }
        } else {
            out << "base=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    // mode
    // Address Mode (Direct or Vectored)
    {
        
        
        // 1:1
        constexpr auto mask = make_mask(1, 1);
        constexpr auto len = (1+1)- (1);
        const uint64_t field_v = ((reg_v & mask) >> (1));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "mode|";
            }
        } else {
            out << "mode=0x"<<std::hex<<field_v<<"|";
        }
    }    
    
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_utvt::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vl::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vsatp::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vscause::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vsepc::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vsie::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vsip::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vsscratch::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vsstatus::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vstart::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vstval::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vstvec::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vtype::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vxrm::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

std::string decode_vxsat::decode(uint64_t reg_v) {
    std::ostringstream out;
    
    out << "0x" << std::hex << reg_v;
    return out.str();
}

