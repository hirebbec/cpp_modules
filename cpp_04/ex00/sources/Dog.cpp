//
// Created by Hilaria Rebbeca on 9/10/22.
//
#include "./../includes/Dog.hpp"
Dog::Dog() {
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Bark" << std::endl;
}

Dog &Dog::operator=(const Dog *obj) {
    this->type = obj->type;
        return *this;
}

Dog::Dog(const Dog &obj) {
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = obj.type;
}
