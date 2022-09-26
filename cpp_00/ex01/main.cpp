/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:04:17 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/06 18:39:11 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook book;
    std::string cmd;

    while (1)
    {
        std::cout << "PhoneBook>";
        std::getline(std::cin, cmd);
        if (cmd == "EXIT")
            book.Exit();
        else if (cmd == "SEARCH")
            book.Search();
        else if (cmd == "ADD")
            book.ADD(book.getNewContact());
        else if (cmd.length() > 0)
            std::cout << "command not found: " << cmd << std::endl;
    }
}