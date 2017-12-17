#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
	public:

		std::string name;
		
		void ninjaShoebox(ClapTrap const &target);
		void ninjaShoebox(FragTrap const &target);
		void ninjaShoebox(ScavTrap const &target);
		void ninjaShoebox(NinjaTrap const &target);


		NinjaTrap(void);
		NinjaTrap(std::string _name);
		NinjaTrap(NinjaTrap const & src);
		NinjaTrap & operator=(NinjaTrap const &rhs);
		~NinjaTrap(void);

};

#endif