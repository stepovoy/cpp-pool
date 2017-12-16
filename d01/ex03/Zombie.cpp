#include "Zombie.hpp"

void Zombie::announce(void) {
	std::cout << "<" << this->name << " (" + this->type + ")>"  << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(void) {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "<" << this->name << " (" << this->type << ")>" << " destroyed." << std::endl;
	
	return ;
}