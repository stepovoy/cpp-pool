#include "Pony.hpp"

Pony::Pony(std::string name, int age): _name(name), _age(age) {
	std::cout << "Pony created" << std::endl;
}

Pony::~Pony() {
	std::cout << "Pony removed" << std::endl;
}

std::string	Pony::getName(void) {
	return this->_name;
}

int			Pony::getAge(void) {
	return this->_age;
}

void		Pony::setName(std::string name) {
	this->_name = name;
}

void		Pony::setAge(int age) {
	this->_age = age;
}