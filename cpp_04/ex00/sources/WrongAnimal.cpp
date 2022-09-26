//
// Created by Hilaria Rebbeca on 9/11/22.
//

#include "./../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal *obj) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    this->type = obj->type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal *obj) {
    this->type = obj->type;
    return *this;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::makeSound() const{
    std::cout << "SIUUUUUUUU" << std::endl;
}