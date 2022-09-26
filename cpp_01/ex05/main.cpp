/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:48:27 by hirebbec          #+#    #+#             */
/*   Updated: 2022/09/02 17:22:29 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl man;

    man.complain("DEBU");
    man.complain("DEBUG");
    man.complain("INFO");
    man.complain("WARNING");
    man.complain("ERROR");
    man.complain("LOL");
}