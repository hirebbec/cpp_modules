/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:20:24 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/07 21:27:26 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *Horde = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        Horde[i].setName(name);
        i++;
    }
    return (Horde);
}