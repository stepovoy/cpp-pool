#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {
	public:
		Weapon *weapon;
		std::string name;

		void attack(void);

		HumanA(std::string n, Weapon &w);
		~HumanA(void);
};

#endif