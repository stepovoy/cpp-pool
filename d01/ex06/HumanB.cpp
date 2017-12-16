#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &w) {
	this->weapon = &w;
}

void HumanB::attack(void) {
	std::cout << this->name << " attacks with his " << this->weapon->type << std::endl;
}

HumanB::HumanB(std::string n) : name(n) {
	std::cout << "HumanB instance created." << std::endl;

	return ;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB instance destroyed." << std::endl;

	return ;
}