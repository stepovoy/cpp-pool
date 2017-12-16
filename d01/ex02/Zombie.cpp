#include "Zombie.hpp"

void Zombie::announce(void) {
	std::cout << "<" << this->name << " (" + this->type + ")>"  << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string type, std::string name) : name(name), type(type) {
	this->announce();

	return ;
}

Zombie::~Zombie(void) {
	std::cout << "<" << this->name << " (" << this->type << ")>" << " destroyed." << std::endl;
	
	return ;
}