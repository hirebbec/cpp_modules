//
// Created by Hilaria Rebbeca on 9/9/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    this->name = "default";
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    this->name = name;
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " default destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) : name(obj.name), hitPoints(obj.hitPoints), energyPoints(obj.energyPoints), attackDamage(obj.attackDamage){
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
    if (&obj == this)
        return (*this);
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string &target) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage"
                  << std::endl;
    } else{
        std::cout << "ClapTrap " << name << " has no hitPoints or energyPoints" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        hitPoints -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " damage, now he has " << hitPoints << " hitPoints" << std::endl;
    } else{
        std::cout << "ClapTrap " << name << " has no hitPoints or energyPoints" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " repaired for " << amount << " hitPoints, now he has " << hitPoints << " hitPoints" << std::endl;
    } else{
        std::cout << "ClapTrap " << name << " has no hitPoints or energyPoints" << std::endl;
    }
}