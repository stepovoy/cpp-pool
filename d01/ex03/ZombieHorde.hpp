#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde {
	public:
		
		Zombie *obj;
		int n;

		void announce(void);
		ZombieHorde(int N);
		~ZombieHorde(void);
};


#endif