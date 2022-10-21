//
// Created by Hilaria Rebbeca on 9/30/22.
//

#ifndef CPP08_MUTANTSTACK_H
#define CPP08_MUTANTSTACK_H
#include "string"
#include "iostream"
#include "algorithm"
#include "stack"

template <typename T>
class MutantStack : public std::stack<T>{
public:
    MutantStack();
    ~MutantStack();
    typedef	typename std::stack<T>::container_type container_type;
    typedef typename container_type::iterator iterator;

    iterator				begin(void) { return (this->c.begin()); }
    iterator				end(void) { return (this->c.end()); }
};
template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::~MutantStack<T>() {}
#endif //CPP08_MUTANTSTACK_H
