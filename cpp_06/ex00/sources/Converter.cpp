//
// Created by Hilaria Rebbeca on 9/19/22.
//

#include "../includes/Converter.h"

Converter::Converter() : target("0"){}

Converter::Converter(std::string target) : target(target){}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter converter) {
    this->target = converter.target;
    return *this;
}

Converter::Converter(const Converter &converter) {
    *this = converter;
}