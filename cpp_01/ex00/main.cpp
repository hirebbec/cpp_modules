/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:49:19 by hirebbec          #+#    #+#             */
/*   Updated: 2022/09/02 16:34:53 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump( std::string name);
Zombie  *newZombie(std::string name);

int main()
{
    Zombie  *Jack;
    
    Jack = newZombie("Jack");
    randomChump("lol");
    randomChump("kek");
    randomChump("123");
    randomChump("321");
    getchar();
    delete(Jack);
}