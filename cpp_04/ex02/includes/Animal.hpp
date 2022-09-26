//
// Created by Hilaria Rebbeca on 9/10/22.
//

#ifndef PROVERKA_ANIMAL_H
#define PROVERKA_ANIMAL_H
#include<string>
#include <iostream>


class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal &operator=(const Animal *obj);
    Animal(const Animal *obj);
    std::string getType() const;
    virtual void makeSound() const = 0;
};


#endif //PROVERKA_ANIMAL_H
