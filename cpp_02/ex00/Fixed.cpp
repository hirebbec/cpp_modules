/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:12:25 by marvin            #+#    #+#             */
/*   Updated: 2022/07/08 16:12:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    std::cout << "default constructor called\n";
}

Fixed::~Fixed() {
    std::cout << "default destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits function called" << std::endl;
    return this->value;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits function called" << std::endl;
    this->value = raw;
}

Fixed::Fixed(const Fixed &obj) :value(obj.value)
{
    std::cout << "copy contryctor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called\n";
	this->value = fixed.getRawBits();
	return *this;
}