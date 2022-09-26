/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:08:12 by hirebbec          #+#    #+#             */
/*   Updated: 2022/09/02 17:05:02 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <stdio.h>

void    replace(char *infile, std::string s1, std::string s2)
{
    std::ifstream   in;
    std::ofstream   out;
    std::string     toPrint;
    std::string     str;
    std::string     outfile;
    int             i;
    in.open(infile);
    if (!in)
    {
        std::cout << "Не удалось открыть файл\n";
        return ;
    }
    outfile = infile;
    outfile.append(".replace");
    out.open(outfile.c_str());
    getline(in, str);
    while (1)
    {
        if ((i = str.find(s1, 0)) != std::string::npos)
        {
            toPrint = str.substr(0, i);
            toPrint.append(s2);
            str = str.substr(i + s1.length());
            out << toPrint;
            continue ;
        }
        out << str << std::endl;
        if (!getline(in, str))
            break ;
    }
}
