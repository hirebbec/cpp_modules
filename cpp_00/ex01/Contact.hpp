/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:44:55 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/08 19:25:20 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <string>

class Contact
{
private:
    std::string first_name;
    std::string second_name;
    std::string nickname;
    std::string number;
    std::string secret;
    int         status;
    int         exist;
public:
    Contact();
    ~Contact();
    void    setName(std::string name);
    void    setSecondName(std::string second);
    void    setNickName(std::string nick);
    void    setNumber(std::string numb);
    void    setSecret(std::string Secret);
    void    setStatus(int   i);
    void    setExist(void);
    int            getStatus(void);
    int            getExist(void);
    std::string    getName(void);
    std::string    getSecond(void);
    std::string    getNick(void);
    std::string    getNumber(void);
    std::string    getSecret(void);
};
