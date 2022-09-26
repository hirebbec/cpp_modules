//
// Created by Hilaria Rebbeca on 9/9/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FradTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap() {
    this->name = "default";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FradTrap default constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
    if (&obj == this)
        return (*this);
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
    return (*this);
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {}

void FragTrap::highFivesguys() {
    if (hitPoints > 0 && energyPoints > 0){
        std::cout << "Fragtrap " << name << " give you high five" << std::endl;
        energyPoints--;
    }
    else{
        std::cout << name << " has no hitPoints or energyPoints" << std::endl;
    }
}

FragTrap::~FragTrap() {
    std::cout << "Fragtrap " << name << " default destructor called" << std::endl;
}
void FragTrap::setAttackDamage(void)
{
    this->attackDamage = 30;
}

void FragTrap::setHitPoints(void)
{
    this->hitPoints = 100;
}