#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed {
	public:

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
		Fixed & operator=(Fixed const &rhs);
		bool operator<(Fixed const &rhs);
		bool operator>(Fixed const &rhs);
		bool operator<=(Fixed const &rhs);
		bool operator>=(Fixed const &rhs);
		bool operator==(Fixed const &rhs);
		bool operator!=(Fixed const &rhs);
		
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const & src);
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;
		Fixed & operator++();
		Fixed operator++(int rhs);
		~Fixed(void);
		
		
		static Fixed		&min(Fixed &value1, Fixed &value2);
		static Fixed		&max(Fixed &value1, Fixed &value2);
		static Fixed const	&min(Fixed const &value1, Fixed const &value2);
		static Fixed const	&max(Fixed const &value1, Fixed const &value2);

	private:

		int _fixed;
		static const int _bits;
};

std::ostream & operator<<(std::ostream & os, Fixed const & rhs);

#endif