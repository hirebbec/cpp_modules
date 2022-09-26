/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:58:35 by marvin            #+#    #+#             */
/*   Updated: 2022/07/08 15:58:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdio.h>

class Fixed
{
private:
    int value;
    static const int bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed (const Fixed &obj);
    Fixed& operator=(const Fixed& fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
