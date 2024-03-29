#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at melee, causing " << this->meleeAttackDamage << " points of damage !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	const char *typesOfAttack[] = {"splits with a 3.14 division", "makes a salto outwards target's back", "splits to 7-th in order to 7x his damage", "tries to find a life purpose, but just hits target", "breaks ordianry time flow and takes his time to aim"};

	if (this->energyPoints >= 25) {
		this->energyPoints -= 25;
		std::cout << "FR4G-TP " << this->name << " " << typesOfAttack[rand() % 5] << " at " << target << " !" << std::endl;
	} else {
		std::cout << "FR4G-TP " << this->name << " is out of energy !" << std::endl;
	}
}

FragTrap::FragTrap(void) : ClapTrap("unnamed") {
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

	std::cout << "FR4G-TP has been initialized without <name> parameter !" << std::endl;

	return ;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name), name(_name) {
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = _name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

	std::cout << "FR4G-TP has been initialized with <name> parameter of " << name  << " !" << std::endl;

	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src.name) {
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

FragTrap & FragTrap::operator=(FragTrap const &rhs) {
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

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP with <name> parameter of " << this->name  << " has been desctructed !" << std::endl;

	return ;
}