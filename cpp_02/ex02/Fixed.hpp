#include <string>
#include <iostream>
#include <stdio.h>
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

	int getRawBits() const;
	void setRawBits(int mFixPoint);

	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed&	operator=(const Fixed& fixed);
	bool	operator==(const Fixed& fixed);
	bool	operator!=(const Fixed& fixed);
	bool	operator>=(Fixed const& fixed) const;
	bool	operator<=(Fixed const& fixed) const;
	bool	operator>(Fixed const& fixed) const;
	bool	operator<(Fixed const& fixed) const;
	Fixed	operator+(Fixed const& fixed) const;
	Fixed	operator-(Fixed const& fixed) const;
	Fixed	operator/(const Fixed &fixed) const;
	Fixed	operator*(const Fixed &fixed) const;
	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static	Fixed&	min(Fixed &Fix1, Fixed &Fix2);
	static	Fixed&	max(Fixed &Fix1, Fixed &Fix2);
	static	const Fixed& min(const Fixed &Fix1, const Fixed &Fix2);
	static	const Fixed& max(const Fixed &Fix1, const Fixed &Fix2);
};
