//
// Created by Hilaria Rebbeca on 9/10/22.
//

#include "./../includes/Cat.hpp"

Cat::Cat() {
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat  destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const{
    std::cout << "Meow" << std::endl;
}

Cat &Cat::operator=(const Cat &obj){
    std::cout << "<<<<<Cat operator called>>>>>" << std::endl;
    if (this != &obj){
        this->type = obj.type;
        delete brain;
        this->brain = new Brain(*obj.brain);
    }
    return *this;
}

Cat::Cat(const Cat &obj) : Animal(obj), brain(new Brain(*(obj.brain))){
    std::cout << "Cat copy constructor called" << std::endl;
}

void Cat::getIdeas() const{
    brain->getIdeas();
}

void Cat::setIdea(std::string idea) const{
    brain->setIdea(idea);
}