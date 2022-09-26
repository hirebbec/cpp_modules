//
// Created by Hilaria Rebbeca on 9/10/22.
//

#ifndef CPP03GIT_DIOMONDTRAP_H
#define CPP03GIT_DIOMONDTRAP_H
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
private:
    std::string name;
    int attackDamage;
    int energyPoints;
    int hitPoints;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &obj);
    DiamondTrap& operator=(const DiamondTrap &obj);
    ~DiamondTrap();
    using ScavTrap::attack;
    void whoAmI();
};


#endif //CPP03GIT_DIOMONDTRAP_H
