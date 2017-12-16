#include "Weapon.hpp"

std::string const &Weapon::getType(void) {
	std::string const &str = this->type;

	return (str);
}

void Weapon::setType(std::string type) {
	this->type = type;
}

Weapon::Weapon(std::string type) : type(type) {
	std::cout << "Weapon instance created." << std::endl;

	return ;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon instance destroyed." << std::endl;

	return ;
}