/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:52:23 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/07 22:32:49 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(const std::string &type)
{
    this->type = type;
}

std::string &Weapon::getType(void)
{
    std::string &ref = this->type;
    return (ref);
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::Weapon() 
{
	this->type = "";
}

Weapon::~Weapon() {};