// See LICENSE for license details.

#include <string>
#include <stdexcept>

#include "decode_factory.hpp"

{%- for reg_name, reg_data in data.regs.items() %}
class decode_{{reg_name}} : public decoder {
    std::string decode(uint64_t) override;
};
{% endfor %}

