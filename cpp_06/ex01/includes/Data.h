//
// Created by Hilaria Rebbeca on 9/24/22.
//

#ifndef CPP06_DATA_H
#define CPP06_DATA_H
#include <string>
#include <stdint.h>
#include <iostream>

typedef struct Data{
    int         num;
    std::string str;
    void        *pointer;
}   Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
Data *newData(void);

#endif //CPP06_DATA_H
