//
// Created by Hilaria Rebbeca on 9/24/22.
//

#include "../includes/Data.h"

uintptr_t	serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

Data *newData(void){
    Data *tmp = new Data;
    tmp->num = 0;
    tmp->str = "lol";
    tmp->pointer = NULL;
    return tmp;
}