//
// Created by Hilaria Rebbeca on 9/19/22.
//

#ifndef CPP06_CONVERTER_H
#define CPP06_CONVERTER_H
#include <iostream>
#include <string>


class Converter {
private:
    std::string target;
public:
    Converter();
    ~Converter();
    Converter(const Converter &converter);
    Converter &operator=(const Converter converter);
    Converter(std::string target);
    std::string toInteger();
};


#endif //CPP06_CONVERTER_H
