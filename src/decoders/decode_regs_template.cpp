// See LICENSE for license details.

#include <string>
#include <stdexcept>
#include <sstream>

#include "decode_factory.hpp"
#include "decode_regs.hpp"

{%- for reg_name, reg_data in data.regs.items() %}
std::string decode_{{reg_name}}::decode(uint64_t) {
    std::ostringstream out;
    {% if reg_data.fields %}
    {%- for field_name, field_data in reg_data.fields.items() %}
    // {{field_name}}
    {% endfor %}
    {% endif %}
    return out.str();
}
{% endfor %}

