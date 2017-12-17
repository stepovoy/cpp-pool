#include "ScavTrap.hpp"

void ScavTrap::challengeNewcomer(void) {
	const char *typeOfChallenge[] = {"runs up to Hoverla mountain", "bursts out to the skyscraper", "gets home in peak time using no subway in less than an hour"};

	std::cout << "SC4V-TP " << typeOfChallenge[rand() % 3] << " !" << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap("unnamed") {
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;

	std::cout << "SC4V-TP as been initialized without <name> parameter !" << std::endl;

	return ;
}
ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name), name(_name) {
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = _name;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	
	std::cout << "SC4V-TP has been initialized with <name> parameter of " << name  << " !" << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src.name) {
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

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
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

ScavTrap::~ScavTrap(void) {
	std::cout << "SC4V-TP with <name> parameter of " << this->name  << " has been desctructed !" << std::endl;

	return ;
}