#include "Fixed.hpp"

Fixed::Fixed() : m_fixPoint(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const int number) : m_fixPoint(number << m_bits) {
}

Fixed::Fixed(const float number) : m_fixPoint(roundf(number * (1 << m_bits))){
}

Fixed::Fixed(const Fixed &fixed) : m_fixPoint(fixed.m_fixPoint) {
}

int Fixed::getRawBits() const {
	return m_fixPoint;
}

void Fixed::setRawBits(int mFixPoint) {
	m_fixPoint = mFixPoint;
}

float Fixed::toFloat() const {
	return ((float)this->m_fixPoint / (float)(1 << this->m_bits));
}

int Fixed::toInt() const {
	return m_fixPoint >> m_bits;
}

Fixed &Fixed::operator=(const Fixed& fixed) {
	m_fixPoint = fixed.getRawBits();
	return *this;
}

bool Fixed::operator==(const Fixed& fixed){
	return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed& fixed){
	return !(this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const& fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const& fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator>(Fixed const& fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(Fixed const& fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& fixed) const
{
	Fixed	result;
	result.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const& fixed) const
{
	Fixed	result;
	result.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (result);
}

Fixed&	Fixed::operator++() {
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed&	Fixed::operator--() {
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed   temp(*this);
	this->m_fixPoint++;
	return temp;
}

Fixed Fixed::operator--(int) {
	Fixed   temp(*this);
	this->m_fixPoint++;
	return temp;
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	return (this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::min(Fixed &Fix1, Fixed &Fix2) {
	return (Fix1 < Fix2 ? Fix1 : Fix2);
}

Fixed &Fixed::max(Fixed &Fix1, Fixed &Fix2) {
	return (Fix1 > Fix2 ? Fix1 : Fix2);
}

const Fixed &Fixed::min(const Fixed &Fix1, const Fixed &Fix2) {
	return (Fix1 < Fix2 ? Fix1 : Fix2);
}

const Fixed &Fixed::max(const Fixed &Fix1, const Fixed &Fix2) {
	return (Fix1 > Fix2 ? Fix1 : Fix2);
}