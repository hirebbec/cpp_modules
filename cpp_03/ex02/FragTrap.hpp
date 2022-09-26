//
// Created by Hilaria Rebbeca on 9/9/22.
//

#ifndef CPP03GIT_FRAGTRAP_H
#define CPP03GIT_FRAGTRAP_H
#include "ScavTrap.hpp"


class FragTrap : public ClapTrap{
private:
    std::string name;
public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &obj);
    FragTrap& operator=(const FragTrap &obj);
    void highFivesguys(void);
};


#endif //CPP03GIT_FRAGTRAP_H
