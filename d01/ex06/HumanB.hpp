#ifndef HUMANB_H
#define HUMANB_H

#include "HumanA.hpp"

class HumanB {
	public:
		Weapon *weapon;
		std::string name;

		void attack(void);
		void setWeapon(Weapon &w);

		HumanB(std::string n);
		~HumanB(void);
};

#endif