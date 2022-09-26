//
// Created by Hilaria Rebbeca on 9/9/22.
//

#ifndef CPP03GIT_SCAVTRAP_H
#define CPP03GIT_SCAVTRAP_H
#include "ClapTrap.hpp"


class ScavTrap: public virtual ClapTrap{
private:
    std::string name;
public:
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap();
    ScavTrap(const ScavTrap &obj);
    ScavTrap& operator=(const ScavTrap &obj);
    void guardGate();
    void setEnergy(void);
};


#endif //CPP03GIT_SCAVTRAP_H
