// See LICENSE for license details.

#ifndef DECODE_FACTORY_HPP
#define DECODE_FACTORY_HPP

#include <memory>
#include <string>

class decoder {
public:
    virtual std::string decode(uint64_t reg) = 0;
};

class decoder_factory {
public:
    static std::unique_ptr<decoder> get(const std::string &reg_name);
};

#endif

