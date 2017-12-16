#include "ZombieEvent.hpp"

int main(void) {
	Zombie zombie1("enourmous", "Envil");
	ZombieEvent *zombie2 = new ZombieEvent();
	zombie2->setZombieType("ordinary");
	Zombie *zombie3 = zombie2->newZombie("Eric");
	zombie2->randomChump();
	delete zombie2;
	delete zombie3;
	return (0);
}