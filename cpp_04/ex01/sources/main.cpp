//
// Created by Hilaria Rebbeca on 9/10/22.
//
#include "./../includes/Brain.hpp"
#include "./../includes/Cat.hpp"
#include "./../includes/Dog.hpp"

int main(){
    const Cat *cat1 = new Cat();
    const Cat *cat2 = new Cat(*cat1);
    Cat cat3;
    getchar();
    std::cout << "----Cat1 ideas----" << std::endl;
    cat1->getIdeas();
    std::cout << "----Cat2 ideas----" << std::endl;
    cat2->getIdeas();
    std::cout << "----Cat3 ideas----" << std::endl;
    cat3.getIdeas();
    cat3 = *cat1;
    getchar();
    std::cout << "After assignation" << std::endl;
    std::cout << "----Cat1 ideas----" << std::endl;
    cat1->getIdeas();
    std::cout << "----Cat2 ideas----" << std::endl;
    cat2->getIdeas();
    std::cout << "----Cat3 ideas----" << std::endl;
    cat3.getIdeas();
    cat1->setIdea("lol");
    cat2->setIdea("kek");
    cat3.setIdea("rofl");
    getchar();
    std::cout << "After change" << std::endl;
    std::cout << "----Cat1 ideas----" << std::endl;
    cat1->getIdeas();
    std::cout << "----C/*at2 ideas----" << std::endl;
    cat2->getIdeas();
    std::cout << "----Cat3 ideas----" << std::endl;
    cat3.getIdeas();
    getchar();
    delete (cat1);
    delete (cat2);
}
