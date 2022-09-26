//
// Created by Hilaria Rebbeca on 9/10/22.
//

#ifndef PROVERKA_DOG_H
#define PROVERKA_DOG_H
#include "Animal.hpp"

class Dog : public Animal{
public:
    Dog();
    ~Dog();
    void makeSound() const;
    Dog(const Dog &obj);
    Dog &operator=(const Dog *obj);
};


#endif //PROVERKA_DOG_H
