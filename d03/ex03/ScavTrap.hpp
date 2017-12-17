#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:

		std::string name;
		
		void challengeNewcomer(void);


		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const &rhs);
		~ScavTrap(void);

};

#endif