/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:11:56 by hirebbec          #+#    #+#             */
/*   Updated: 2022/09/02 16:43:04 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

int main()
{
        Weapon club = Weapon("crude spiked club");
        HumanA bob(club, "Bob");
        bob.attack();
        getchar();
        club.setType("some other type of club");
        bob.attack();
        getchar();
        HumanB jim("Jim");
        jim.attack();
        getchar();
        jim.setWeapon(club);
        jim.attack();
        getchar();
        club.setType("legs");
        jim.attack();
}