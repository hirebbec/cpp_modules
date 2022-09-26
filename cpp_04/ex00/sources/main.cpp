//
// Created by Hilaria Rebbeca on 9/10/22.
//
#include "./../includes/WrongCat.hpp"
#include "./../includes/Cat.hpp"
#include "./../includes/Dog.hpp"

int main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << "\n\n---WRONG TEST---\n\n\n";
    const WrongAnimal *hirebbbec = new WrongAnimal();
    const WrongAnimal *Ruzel = new WrongCat();
    hirebbbec->makeSound();
    Ruzel->makeSound();
    delete meta;
    delete (j);
    delete (i);
    delete (hirebbbec);
    delete (Ruzel);
}
