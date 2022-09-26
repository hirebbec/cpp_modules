//
// Created by Hilaria Rebbeca on 9/10/22.
//
#include "./../includes/Dog.hpp"

Dog::Dog() {
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const{
    std::cout << "Bark" << std::endl;
}

Dog &Dog::operator=(const Dog &obj){
    std::cout << "<<<<<Dog operator called>>>>>" << std::endl;
    if (this != &obj){
        this->type = obj.type;
        delete brain;
        this->brain = new Brain(*obj.brain);
    }
    return *this;
}

Dog::Dog(const Dog &obj) : Animal(obj), brain(new Brain(*(obj.brain))){
    std::cout << "Dog copy constructor called" << std::endl;
}

void Dog::getIdeas() const{
    brain->getIdeas();
}

void Dog::setIdea(std::string idea) const{
    brain->setIdea(idea);
}