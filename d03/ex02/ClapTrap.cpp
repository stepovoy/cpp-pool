#include "ClapTrap.hpp"

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
	std::cout << this->name << " attacks " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	int damageToTake = (int)amount - this->armorDamageReduction;

	this->hitPoints -= damageToTake;
	if (this->hitPoints < 0)
		this->hitPoints = 0;

	std::cout << this->name << " has taken " << damageToTake << " points of damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += (int)amount;
	if (this->hitPoints > maxHitPoints)
		this->hitPoints = maxHitPoints;

	std::cout << this->name << " repaired himself for " << amount << " of hitpoints !" << std::endl;
}

ClapTrap::ClapTrap(void) {
	std::cout << "CL4P-TP has been initialized without <name> parameter !" << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string _name) : name(_name) {
	std::cout << "CL4P-TP has been initialized with <name> parameter of " << name  << " !" << std::endl;

	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;

	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs) {
	(void)rhs;

	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "CL4P-TP with <name> parameter of " << this->name  << " has been desctructed !" << std::endl;

	return ;
}