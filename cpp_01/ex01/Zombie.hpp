/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:38:23 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/07 21:25:54 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <string>
#include <stdio.h>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void announce( void );
    void    setName(std::string name);
    Zombie();
    ~Zombie();
};
