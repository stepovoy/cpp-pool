#include "NinjaTrap.hpp"

void NinjaTrap::ninjaShoebox(ClapTrap const &target) {
	std::cout << "A shoe throw at " << target.name << " was initialized !" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target) {
	std::cout << "A shoe throw at " << target.name << " was initialized !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target) {
	std::cout << "A shoe throw at " << target.name << " was initialized !" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &target) {
	std::cout << "A shoe throw at " << target.name << " was initialized !" << std::endl;
}


NinjaTrap::NinjaTrap(void) : ClapTrap("unnamed") {
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;

	std::cout << "NNJ4-TP as been initialized without <name> parameter !" << std::endl;

	return ;
}
NinjaTrap::NinjaTrap(std::string _name) : ClapTrap(_name), name(_name) {
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = _name;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	
	std::cout << "NNJ4-TP has been initialized with <name> parameter of " << name  << " !" << std::endl;

	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src.name) {
	*this = src;

	this->hitPoints = src.hitPoints;
	this->maxHitPoints = src.maxHitPoints;
	this->energyPoints = src.energyPoints;
	this->maxEnergyPoints = src.maxEnergyPoints;
	this->level = src.level;
	this->meleeAttackDamage = src.meleeAttackDamage;
	this->rangedAttackDamage = src.rangedAttackDamage;
	this->armorDamageReduction = src.armorDamageReduction;

	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const &rhs) {
	this->hitPoints = rhs.hitPoints;
	this->maxHitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamage = rhs.rangedAttackDamage;
	this->armorDamageReduction = rhs.armorDamageReduction;

	return *this;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "NNJ4-TP with <name> parameter of " << this->name  << " has been desctructed !" << std::endl;

	return ;
}