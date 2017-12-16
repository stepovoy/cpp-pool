#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	public:

		std::string type;
		std::string name;

		Zombie(std::string type, std::string name);
		~Zombie(void);

		void announce();
};

#endif