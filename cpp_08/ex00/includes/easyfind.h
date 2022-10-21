//
// Created by Hilaria Rebbeca on 9/28/22.
//

#ifndef CPP07GIT_WHATEVER_H
#define CPP07GIT_WHATEVER_H
#include "algorithm"
#include "string"
#include "iostream"
template <typename T> typename T::iterator
easyfind(T& container, int n){
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        std::cout << "Value not found:" << n << std::endl;
    else
        std::cout << "Value found:" << n << std::endl;
    return it;
}

#endif //CPP07GIT_WHATEVER_H
