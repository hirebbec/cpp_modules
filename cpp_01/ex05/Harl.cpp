/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:25:09 by hirebbec          #+#    #+#             */
/*   Updated: 2022/09/02 17:21:37 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

    void Harl::debug      ( void )    {std::cout << "it's DEBUG\n";}
    void Harl::info       ( void )    {std::cout << "it's INFO\n";}
    void Harl::warning    ( void )    {std::cout << "it's WARNING\n";}
    void Harl::error      ( void )    {std::cout << "it's ERROR\n";}
    
    void Harl::complain( std::string level )
    {

        std::string commands[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        void (Harl::*levels[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
        for (int i = 0; i < 4 ; i++){
            if (commands[i] == level){
                (this->*levels[i])();             
                return ;
            }
        }
        std::cout << "NO SUCH COMMAND" << std::endl;
    }