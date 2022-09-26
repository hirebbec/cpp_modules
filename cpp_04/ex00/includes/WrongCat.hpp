//
// Created by Hilaria Rebbeca on 9/11/22.
//

#ifndef CPP04GIT_WRONGCAT_H
#define CPP04GIT_WRONGCAT_H
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal{
public:
    WrongCat();
    ~WrongCat();
    void makeSound() const;
    WrongCat(const WrongCat &obj);
    WrongCat &operator=(const WrongCat *obj);
};


#endif //CPP04GIT_WRONGCAT_H
