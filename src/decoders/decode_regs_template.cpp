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

{%- for reg_name, reg_data in data.regs.items() %}
std::string decode_{{reg_name}}::decode(uint64_t reg_v) {
    std::ostringstream out;
    {% if reg_data.fields %}
    {%- for field_name, field_data in reg_data.fields.items() %}
    // {{field_name}}
    // {{field_data.desc}}
    {
        {% set msb = field_data.bits[0] %}
        {% set lsb = field_data.bits[1] if field_data.bits[1] else field_data.bits[0] %}
        // {{msb}}:{{lsb}}
        constexpr auto mask = make_mask({{msb}}, {{lsb}});
        constexpr auto len = ({{msb}}+1)- ({{lsb}});
        const uint64_t field_v = ((reg_v & mask) >> ({{lsb}}));
        reg_v = reg_v & ~mask;
        if constexpr (len==1) {
            if (field_v) {
                out << "{{field_name}}|";
            }
        } else {
            out << "{{field_name}}=0x"<<std::hex<<field_v<<"|";
        }
    }    
    {% endfor %}
    {% endif %}
    out << "0x" << std::hex << reg_v;
    return out.str();
}
{% endfor %}

