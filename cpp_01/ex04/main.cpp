/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:21:54 by hirebbec          #+#    #+#             */
/*   Updated: 2022/09/02 16:44:56 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

void    replace(char *infile, std::string s1, std::string s2);

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "wrong number of arguments\n";
        return (0);
    }
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    replace(argv[1], s1, s2);
}