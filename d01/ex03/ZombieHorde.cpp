#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : n(N) {
	const char *names[] = { "Tom", "Tim", "Andy", "Peter" };
	int i = -1;
	std::srand(std::time(nullptr));

	this->obj = new Zombie[N];
	
	while (++i < N) {
    	int random_variable = std::rand() % 4;
		
		this->obj[i].type = "enourmous";
		this->obj[i].name = names[random_variable];
	}

	return ;
}

ZombieHorde::~ZombieHorde(void) {
	delete[] this->obj;

	return ;
}

void ZombieHorde::announce(void) {
	int i = -1;

	while (++i < this->n)
		this->obj[i].announce();
}
