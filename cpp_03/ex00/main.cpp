//
// Created by Hilaria Rebbeca on 9/9/22.
//

#include "ClapTrap.hpp"

int main(){
    ClapTrap hirebbec("hirebbec");
    ClapTrap Ruzel("Ruzel");

    hirebbec.attack("Ruzel");
    hirebbec.takeDamage(9);
    hirebbec.beRepaired(0);
    hirebbec.takeDamage(0);
    hirebbec.takeDamage(0);
    hirebbec.takeDamage(0);
    hirebbec.takeDamage(0);
    hirebbec.takeDamage(0);
    hirebbec.takeDamage(0);
    hirebbec.takeDamage(0);
    getchar();
    hirebbec.takeDamage(0);
    Ruzel.takeDamage(100);
    Ruzel.beRepaired(100);
    Ruzel.attack("lol");
}