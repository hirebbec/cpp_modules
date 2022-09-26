/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:04:28 by hirebbec          #+#    #+#             */
/*   Updated: 2022/07/05 01:29:46 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype> 

int main(int argc, char **argv)
{
    int i = 1, j = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
    while (argv[i])
    {
		while (argv[i][j])
		{
			if (argv[i][j] >= 97 && argv[i][j] <= 122)
				argv[i][j] = toupper((int)argv[i][j]);
			j++;
		}
		j = 0;
		i++;
    }
	i = 1;
	while (argv[i])
	{
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
}