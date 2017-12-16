#include "Human.hpp"

std::string Human::identify(void) {
	return (this->brain.identify());
}

Brain Human::getBrain(void) {
	return (this->brain);
}

Human::Human(void) {
	std::cout << "Human instance created." << std::endl;
	Brain *brain = new Brain();
	this->brain = *brain;
	
	return ;
}

Human::~Human(void) {
	std::cout << "Human instance destroyed." << std::endl;

	return ;
}