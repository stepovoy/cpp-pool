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
		
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const & src);
		Fixed & operator=(Fixed const &rhs);
		~Fixed(void);

	private:

		int _fixed;
		static const int _bits;
};

std::ostream & operator<<(std::ostream & os, Fixed const & rhs);

#endif