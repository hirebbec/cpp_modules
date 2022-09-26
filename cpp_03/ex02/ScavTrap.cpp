//
// Created by Hilaria Rebbeca on 9/9/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    hitPoints = 100;
    this->name = "default";
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
    hitPoints = 100;
    this->name = name;
    energyPoints = 50;
    attackDamage = 20;
}

void ScavTrap::guardGate() {
    if (hitPoints > 0 && energyPoints > 0){
        std::cout << "ScavTrap " << name << " now in Gate mode" << std::endl;
        energyPoints--;
    }
    else{
        std::cout << name << " has no hitPoints or energyPoints" << std::endl;
    }
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " default destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
    if (&obj == this)
        return (*this);
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {}
