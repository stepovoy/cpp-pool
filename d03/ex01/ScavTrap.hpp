#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "FragTrap.hpp"

class ScavTrap {
	public:

		int hitPoints;
		int maxHitPoints;
		int energyPoints;
		int maxEnergyPoints;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageReduction;

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(void);


		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const &rhs);
		~ScavTrap(void);

};

#endif