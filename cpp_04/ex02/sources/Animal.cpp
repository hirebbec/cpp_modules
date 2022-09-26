//
// Created by Hilaria Rebbeca on 9/10/22.
//

#include "./../includes/Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal default  destructor called" << std::endl;
}

Animal::Animal(const Animal *obj) {
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = obj->type;
}

Animal &Animal::operator=(const Animal *obj) {
    this->type = obj->type;
    return *this;
}

std::string Animal::getType() const{
    return this->type;
}

void Animal::makeSound() const{
    std::cout << "SHHHHAAA" << std::endl;
}