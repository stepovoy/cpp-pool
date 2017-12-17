#include "ScavTrap.hpp"

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	int damageToTake = (int)amount - this->armorDamageReduction;

	this->hitPoints -= damageToTake;
	if (this->hitPoints < 0)
		this->hitPoints = 0;

	std::cout << "SC4V-TP " << this->name << " has taken " << damageToTake << " points of damage !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	this->hitPoints += (int)amount;
	if (this->hitPoints > maxHitPoints)
		this->hitPoints = maxHitPoints;

	std::cout << "SC4V-TP " << this->name << " repaired himself for " << amount << " of hitpoints !" << std::endl;
}

void ScavTrap::challengeNewcomer(void) {
	const char *typeOfChallenge[] = {"runs up to Hoverla mountain", "bursts out to the skyscraper", "gets home in peak time using no subway in less than an hour"};

	std::cout << "SC4V-TP " << typeOfChallenge[rand() % 3] << " !" << std::endl;
}

ScavTrap::ScavTrap(void) : hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), level(1), meleeAttackDamage(20), rangedAttackDamage(15), armorDamageReduction(3) {
	std::cout << "SC4V-TP as been initialized without <name> parameter !" << std::endl;

	return ;
}
ScavTrap::ScavTrap(std::string _name) : hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), level(1), name(_name), meleeAttackDamage(20), rangedAttackDamage(15), armorDamageReduction(3) {
	std::cout << "SC4V-TP has been initialized with <name> parameter of " << name  << " !" << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	*this = src;

	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
	(void)rhs;

	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "SC4V-TP with <name> parameter of " << this->name  << " has been desctructed !" << std::endl;

	return ;
}