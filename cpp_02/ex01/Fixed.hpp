/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:03:37 by marvin            #+#    #+#             */
/*   Updated: 2022/07/08 17:03:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <math.h>

class Fixed {
private:
	int 				m_fixPoint;
	static const int 	m_bits = 8;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed& operator=(const Fixed& fixed);

	int getRawBits() const;
	void setRawBits(int mFixPoint);

	float toFloat( void ) const;
	int toInt( void ) const;
};
