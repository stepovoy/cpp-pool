#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>

class Fixed {
	public:

		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed & operator=(Fixed const &rhs);
		~Fixed(void);

	private:

		int _fixed;
		static const int _bits;

};

#endif