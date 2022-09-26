/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:59:44 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/08 19:24:46 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


//
//SETTERS
//

void    Contact::setName(std::string name)
{
    first_name = name;
}

void    Contact::setSecondName(std::string second)
{
    second_name = second;
}

void    Contact::setNickName(std::string nick)
{
    nickname = nick;
}

void    Contact::setSecret(std::string Secret)
{
    secret = Secret;
}

void    Contact::setNumber(std::string numb)
{
    number = numb;
}

void    Contact::setStatus(int i)
{
    status = i;
}

void    Contact::setExist(void)
{
    exist = 1;
}

///
///GETTERS
///

std::string    Contact::getName(void)
{
    return (first_name);
}

std::string    Contact::getSecond(void)
{
    return (second_name);
}

std::string    Contact::getNick(void)
{
    return (nickname);
}

std::string    Contact::getNumber(void)
{
    return (number);
}

std::string    Contact::getSecret(void)
{
    return (secret);
}

int Contact::getStatus(void)
{
    return (status);
}

int Contact::getExist(void)
{
    return (exist);
}

Contact::Contact()
{
    this->exist = 0;
    this->status = 0;
}

Contact::~Contact(){};