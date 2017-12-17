#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:

		std::string name;
		
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void vaulthunter_dot_exe(std::string const & target);


		FragTrap(void);
		FragTrap(std::string _name);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const &rhs);
		~FragTrap(void);

};

#endif