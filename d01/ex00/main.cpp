#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	Pony*	Peter = new Pony("Peter", 2);
	std::cout << "Pony's name is " << Peter->getName() << ". It is " << Peter->getAge() << " years of age." << std::endl;
	delete Peter;
}

void	ponyOnTheStack(void) {
	Pony Tim = Pony("Tim", 11);
	std::cout << "Pony's name is " << Tim.getName() << ". It is " << Tim.getAge() << " years of age." << std::endl;
}

int		main() {
	std::cout << "Initialized ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();
	std::cout << "ponyOnTheHeap destroyed." << std::endl;
	std::cout << "Initialized ponyOnTheStack" << std::endl;
	ponyOnTheStack();
	std::cout << "ponyOnTheStack destroyed." << std::endl;
	return(0);
}