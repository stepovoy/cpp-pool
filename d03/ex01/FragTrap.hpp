#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <cstdlib>

class FragTrap {
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
		void vaulthunter_dot_exe(std::string const & target);


		FragTrap(void);
		FragTrap(std::string _name);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const &rhs);
		~FragTrap(void);

};

#endif