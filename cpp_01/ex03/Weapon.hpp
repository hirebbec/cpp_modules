/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:48:50 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/07 22:32:53 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdio.h>

class Weapon
{
private:
    std::string type;
public:
    std::string &getType(void);
    void        setType(const std::string &type);
    Weapon(std::string type);
    Weapon(); 
    ~Weapon();
};
