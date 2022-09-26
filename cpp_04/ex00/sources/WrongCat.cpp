//
// Created by Hilaria Rebbeca on 9/11/22.
//

#include "./../includes/WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "Cat";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat denstructor called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "MOOOOOOOOOOOO" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat *obj) {
    this->type = obj->type;
    return *this;
}

WrongCat::WrongCat(const WrongCat &obj){
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->type = obj.type;
}

