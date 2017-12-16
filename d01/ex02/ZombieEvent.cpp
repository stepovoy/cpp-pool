#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *z = new Zombie(this->type, name);

	return (z);
}

void ZombieEvent::randomChump(void) {
	const char *names[] = { "Tom", "Tim", "Andy", "Peter" };
	std::srand(std::time(nullptr));
    int random_variable = std::rand() % 4;

	Zombie zombie(this->type, names[random_variable]);	
}