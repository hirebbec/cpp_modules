//
// Created by Hilaria Rebbeca on 9/10/22.
//

#ifndef PROVERKA_DOG_H
#define PROVERKA_DOG_H
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
    Brain *brain;
public:
    Dog();
    ~Dog();
    void makeSound() const;
    Dog(const Dog &obj);
    Dog &operator=(const Dog &obj);
    void setIdea(std::string idea) const;
    void getIdeas() const;
};


#endif //PROVERKA_DOG_H
