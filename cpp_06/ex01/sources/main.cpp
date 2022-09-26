//
// Created by Hilaria Rebbeca on 9/24/22.
//

#include "../includes/Data.h"

int main(){
    Data *data = newData();
    std::cout << data << std::endl;
    uintptr_t ptr = serialize(data);
    std::cout << ptr << std::endl;
    std::cout << deserialize(ptr) << std::endl;
    delete data;
}
