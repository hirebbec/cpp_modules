/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:42:47 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/06 18:10:52 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <stdlib.h>
#include <sstream>

class PhoneBook
{
private:
    Contact contacts[8];
public:
    PhoneBook() {};
    ~PhoneBook() {};
    int getNewContact(void);
    void ADD(int i);
    void Exit(void);
    void Search(void);
};