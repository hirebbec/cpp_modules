//
// Created by Hilaria Rebbeca on 9/10/22.
//

#ifndef PROVERKA_CAT_H
#define PROVERKA_CAT_H
#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal{
private:
    Brain *brain;
public:
    Cat();
    ~Cat();
    void makeSound() const;
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);
    void getIdeas() const;
    void setIdea(std::string idea) const;
};


#endif //PROVERKA_CAT_H
