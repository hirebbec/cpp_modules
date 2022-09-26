/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:50:02 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/06 20:11:00 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>
#include <stdlib.h>

int PhoneBook::getNewContact(void)
{
    int i = 0;
    while (1)
    {
        if (i == 8)
        {
            contacts[0].setStatus(0);
            contacts[1].setStatus(0);
            contacts[2].setStatus(0);
            contacts[3].setStatus(0);
            contacts[4].setStatus(0);
            contacts[5].setStatus(0);
            contacts[6].setStatus(0);
            contacts[7].setStatus(0);
            return (0);
        }
        if (contacts[i].getStatus() == 0)
            return (i);
        i++;
    }
}

void PhoneBook::Exit(void)
{
    exit(0);
}

void    PhoneBook::ADD(int  i)
{
    std::string info[5];
    std::string tmp;
    const char *str;
    int  j = 0;

    std::cout << "Введите имя нового пользователя: ";
    std::getline(std::cin, info[0]);
    std::cin.clear();
    std::cout << "Введите фамилию нового пользователя: ";
    std::getline(std::cin, info[1]);
    std::cin.clear();
    std::cout << "Введите пользовательсоке имя нового пользователя: ";
    std::getline(std::cin, info[2]);
    std::cin.clear();
    std::cout << "Введите номер нового пользователя: ";
    std::getline(std::cin, info[3]);
    std::cin.clear();
    str = info[3].c_str();
    while (str[j])
    {
        if (isdigit(str[j]) == 0)
        {
            std::cout << "\033[1;31mНомер пользователя может содержать только цифры\033[0m\n";
            std::cout << "\033[1;31mПользователь не будет создан\033[0m\n";
            return ; 
        }
        j++;
    }
    std::cout << "Введите секрет нового пользователя: ";
    std::getline(std::cin, info[4]);
    std::cin.clear();
    contacts[i].setName(info[0]);
    contacts[i].setSecondName(info[1]);
    contacts[i].setNickName(info[2]);
    contacts[i].setNumber(info[3]);
    contacts[i].setSecret(info[4]);
    contacts[i].setStatus(1);
    contacts[i].setExist();
}

void    Info(Contact user, int i)
{
    std::string name;
    std::string last_name;
    std::string nick;
    std::string index;
    std::stringstream ss;
    
    i++;
    ss << i;
    ss >> index;
    if (index.length() > 10)
    {
        index.erase(9);
        index.push_back('.');
    }
    else if (index.length() < 10)
        index.append(10 - index.length(), ' ');
    name = user.getName();
    if (name.length() > 10)
    {
        name.erase(9);
        name.push_back('.');
    }
    else if (name.length() < 10)
        name.append(10 - name.length(), ' ');
    last_name = user.getSecond();
    if (last_name.length() > 10)
    {
        last_name.erase(9);
        last_name.push_back('.');
    }
    else if (last_name.length() < 10)
        last_name.append(10 - last_name.length(), ' ');
    nick = user.getNick();
    if (nick.length() > 10)
    {
        nick.erase(9);
        nick.push_back('.');
    }
    else if (nick.length() < 10)
        nick.append(10 - nick.length(), ' ');
    std::cout << index << "|" << name << "|" << last_name << "|" << nick << "|" << std::endl;
}

void    PhoneBook::Search(void)
{
    int i = 0;
    std::string tmp;

    while (i < 8)
    {
        if (contacts[0].getExist() != 1)
        {
            std::cout << "No contacts\n";
            return ;
        }
        if (contacts[i].getExist() == 1)
            Info(contacts[i], i);
        else
            break ;
        i++;
    }
    std::cout << "Введите индекс контакта, для полной информации о нем\n";
    std::getline(std::cin, tmp);
    std::stringstream(tmp) >> i;
    i--;
    if (contacts[i].getExist() == 0 || i < 0 || i > 8)
    {
        std::cout << "Такого контакта не существует\n";
        return ;
    }
    std::cout << "Имя:                        " << contacts[i].getName() << std::endl;
    std::cout << "Фамилия:                    " << contacts[i].getSecond() << std::endl;
    std::cout << "Пользовательское имя:       " << contacts[i].getNick() << std::endl;
    std::cout << "Номер:                      " << contacts[i].getNumber() << std::endl;
	std::cout << "Секрет:                     " << contacts[i].getSecret() << std::endl;
}