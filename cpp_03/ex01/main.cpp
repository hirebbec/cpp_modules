//
// Created by Hilaria Rebbeca on 9/9/22.
//

#include "ScavTrap.hpp"

int main(){
    ScavTrap Ruzel("Ruzel");
    Ruzel.guardGate();
    Ruzel.attack("Reek");
    Ruzel.takeDamage(11);
    Ruzel.beRepaired(0);
}