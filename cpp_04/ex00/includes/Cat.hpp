//
// Created by Hilaria Rebbeca on 9/10/22.
//

#ifndef PROVERKA_CAT_H
#define PROVERKA_CAT_H
#include "Animal.hpp"


class Cat : public Animal{
public:
    Cat();
    ~Cat();
    void makeSound() const;
    Cat(const Cat &obj);
    Cat &operator=(const Cat *obj);
};


#endif //PROVERKA_CAT_H
