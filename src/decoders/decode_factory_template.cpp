// See LICENSE for license details.

#include <string>
#include <stdexcept>
#include <memory>

#include "decode_factory.hpp"
#include "decode_regs.hpp"

std::unique_ptr<decoder> decoder_factory::get(const std::string &reg_name) {

{%- for reg_name, reg_data in data.regs.items() %}
    if (reg_name == "{{ reg_name}}") {
        return std::make_unique<decode_{{reg_name}}>();
    }
{% endfor %}
    throw std::invalid_argument(std::string("ERROR: unknown register: ") + reg_name);
}

