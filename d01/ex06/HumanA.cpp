#include "HumanA.hpp"

void HumanA::attack(void) {
	std::cout << this->name << " attacks with his " << this->weapon->type << std::endl;
}

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(&w) {
	std::cout << "HumanA instance created." << std::endl;

	return ;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA instance destroyed." << std::endl;

	return ;
}