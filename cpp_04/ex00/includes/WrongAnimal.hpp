//
// Created by Hilaria Rebbeca on 9/11/22.
//

#ifndef CPP04GIT_WRONGANIMAL_H
#define CPP04GIT_WRONGANIMAL_H
#include "Animal.hpp"


class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal *obj);
    WrongAnimal(const WrongAnimal *obj);
    std::string getType() const;
    void makeSound() const;
};


#endif //CPP04GIT_WRONGANIMAL_H
