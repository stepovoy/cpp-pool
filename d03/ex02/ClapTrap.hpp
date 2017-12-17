#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
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


		ClapTrap(void);
		ClapTrap(std::string _name);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const &rhs);
		~ClapTrap(void);

};

#endif