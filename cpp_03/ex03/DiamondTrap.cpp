//
// Created by Hilaria Rebbeca on 9/10/22.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name){
    std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
    this->name = name;
    ClapTrap::name = name + "_clapName";
    FragTrap::setAttackDamage();
    ScavTrap::setEnergy();
    FragTrap::setHitPoints();
}

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is " << name << ", ClapTrap name is " << ClapTrap::name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj) {
    if (&obj == this)
        return (*this);
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
    return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj){}