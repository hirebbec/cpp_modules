//
// Created by Hilaria Rebbeca on 9/9/22.
//

#ifndef CPP03GIT_CLAPTRAP_H
#define CPP03GIT_CLAPTRAP_H
#include <string>
#include <iostream>

class ClapTrap {
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &obj);
    ClapTrap& operator=(const ClapTrap& obj);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif //CPP03GIT_CLAPTRAP_H
