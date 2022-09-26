/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:35:58 by hirebbec          #+#    #+#             */
/*   Updated: 2022/09/04 14:11:13 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fixPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int number) : m_fixPoint(number << m_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number) : m_fixPoint(roundf(number * (1 << m_bits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : m_fixPoint(fixed.m_fixPoint) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& fixed) {
	std::cout << "Assignation operator called" << std::endl;
	m_fixPoint = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return m_fixPoint;
}

void Fixed::setRawBits(int mFixPoint) {
	std::cout << "setRawBits member function called" << std::endl;
	m_fixPoint = mFixPoint;
}

float Fixed::toFloat() const {
	return ((float)this->m_fixPoint / (float)(1 << this->m_bits));
}

int Fixed::toInt() const {
	return m_fixPoint >> m_bits;
}