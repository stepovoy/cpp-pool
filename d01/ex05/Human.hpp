#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"

class Human {
	public:

		Brain brain;

		Brain getBrain(void);

		Human(void);
		~Human(void);

		std::string identify(void);
};

#endif