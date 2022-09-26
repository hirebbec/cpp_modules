//
// Created by Hilaria Rebbeca on 9/9/22.
//

#ifndef CPP03GIT_FRAGTRAP_H
#define CPP03GIT_FRAGTRAP_H
#include "ScavTrap.hpp"


class FragTrap : public virtual ClapTrap{
private:
    std::string name;
public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &obj);
    FragTrap& operator=(const FragTrap &obj);
    void highFivesguys(void);
    void setAttackDamage(void);
    void setHitPoints(void);
};


#endif //CPP03GIT_FRAGTRAP_H
