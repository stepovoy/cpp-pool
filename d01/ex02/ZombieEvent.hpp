#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.hpp"

class ZombieEvent {
	public:
		std::string type;

		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void randomChump(void);
};


#endif