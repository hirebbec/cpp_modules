//
// Created by Hilaria Rebbeca on 9/11/22.
//

#include "./../includes/Brain.hpp"
#include "./../includes/Animal.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
    ideas = new std::string[100];
    for (int i = 0; i < 100; i++){
        ideas[i] = "idea_" + std::to_string(rand() % 100);
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
    delete[] ideas;
}

void Brain::getIdeas() const {
    for (int i = 0; i < 5; i++){
        std::cout << ideas[i] << std::endl;
    }
}

void Brain::setIdea(std::string idea) {
    ideas[0] = idea;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain operator called" << std::endl;
    if (this != &obj) {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return (*this);
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        ideas[i] = obj.ideas[i];
    (void)obj;
}