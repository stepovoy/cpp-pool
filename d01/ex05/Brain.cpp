#include "Brain.hpp"

std::string Brain::identify(void) {
	return (this->address);
}

Brain::Brain(void) : iq(120)
{
	std::cout << "Brain instance created." << std::endl;
	const void * address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << address;
	this->address = ss.str();

	return;
}

Brain::~Brain(void) {
	std::cout << "Brain instance destroyed." << std::endl;

	return ;
}