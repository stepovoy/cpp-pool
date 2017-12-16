#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <sstream>
#include <string>

class Brain {
	public:

		int iq;
		std::string address;

		Brain(void);
		~Brain(void);

		std::string identify(void);
};

#endif