#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon {
	public:
		std::string type;

		std::string const &getType(void);
		void setType(std::string);

		Weapon(std::string type);
		~Weapon(void);
};

#endif