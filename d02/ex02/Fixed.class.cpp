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

bool Fixed::operator<(Fixed const &rhs) {
	if (this->_fixed < rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>(Fixed const &rhs) {
	if (this->_fixed > rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const &rhs) {
	if (this->_fixed <= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const &rhs) {
	if (this->_fixed >= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const &rhs) {
	if (this->_fixed == rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const &rhs) {
	if (this->_fixed != rhs.getRawBits())
		return true;
	return false;
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

Fixed & Fixed::operator=(Fixed const &rhs) {
	this->_fixed = rhs.getRawBits();

	return *this;
}

Fixed Fixed::operator+(Fixed const & rhs) const {
	Fixed output;

	output._fixed = this->_fixed + rhs.getRawBits();

	return output;
}

Fixed Fixed::operator-(Fixed const & rhs) const {
	Fixed output;

	output._fixed = this->_fixed - rhs.getRawBits();

	return output;
}

Fixed Fixed::operator*(Fixed const & rhs) const {
	Fixed output;

	output._fixed = (this->_fixed * rhs.getRawBits()) / 256;

	return output;
}

Fixed Fixed::operator/(Fixed const & rhs) const {
	Fixed output;

	output._fixed = this->_fixed / rhs.getRawBits();

	return output;
}

Fixed & Fixed::operator++() {
	this->_fixed += 1;

	return *this;
}

Fixed Fixed::operator++(int rhs) {
	(void)rhs;
	Fixed copy(*this);

	++(*this);

	return copy;
}

Fixed		&Fixed::min(Fixed &value1, Fixed &value2) {
	return value1._fixed > value2._fixed ? value2 : value1;
}

Fixed		&Fixed::max(Fixed &value1, Fixed &value2) {
	return value1._fixed < value2._fixed ? value2 : value1;
}

Fixed const	&Fixed::min(Fixed const &value1, Fixed const &value2) {
	return value1._fixed > value2._fixed ? value2 : value1;
}

Fixed const	&Fixed::max(Fixed const &value1, Fixed const &value2) {
	return value1._fixed < value2._fixed ? value2 : value1;
}

std::ostream & operator<<(std::ostream & os, Fixed const & rhs) {
	os << rhs.getRawBits() / 256.0;

	return os;
}


