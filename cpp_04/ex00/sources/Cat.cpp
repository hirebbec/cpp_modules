//
// Created by Hilaria Rebbeca on 9/10/22.
//

#include "./../includes/Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat  destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meow" << std::endl;
}

Cat &Cat::operator=(const Cat *obj) {
    this->type = obj->type;
    return *this;
}

Cat::Cat(const Cat &obj){
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = obj.type;
}