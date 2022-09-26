/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:49:19 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/07 21:32:05 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    Zombie *Horde = zombieHorde(10, "smelly zombie");
    int i = 0;
    while (i < 10)
    {
        Horde[i].announce();
        i++;
    }
    getchar();
    delete[] Horde;
}