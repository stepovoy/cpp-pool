#include "Fixed.class.hpp"

const int Fixed::_bits = 8;

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;

	return this->_fixed;
}

void Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

float Fixed::toFloat(void) const {
	return this->_fixed / 256.0;
}

int Fixed::toInt(void) const {
	return this->_fixed / 256;
}

Fixed::Fixed(void) : _fixed(0) {
	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = rhs.getRawBits();

	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = value * 256;

	return ;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(value * 256.0);

	return;
}

std::ostream & operator<<(std::ostream & os, Fixed const & rhs) {
	os << rhs.getRawBits() / 256.0;

	return os;
}