/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:57:18 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/07 22:52:25 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

class HumanA
{
private:
    Weapon &weapon;
    std::string name;
public:
    void    attack(void);
    HumanA(Weapon &weapon, std::string name);
};
