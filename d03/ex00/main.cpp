#include "FragTrap.hpp"

int main(void)
{
	srand((unsigned int)time(NULL));

	FragTrap fragTrap("Assault Robot");
	std::string const & str = "Assault Shoebox";
	
	std::cout << fragTrap.name << "'s energy points: " << fragTrap.energyPoints << std::endl;
	fragTrap.vaulthunter_dot_exe(str);
	std::cout << fragTrap.name << "'s energy points: " << fragTrap.energyPoints << std::endl;
	fragTrap.vaulthunter_dot_exe(str);
	fragTrap.vaulthunter_dot_exe(str);
	std::cout << fragTrap.name << "'s energy points: " << fragTrap.energyPoints << std::endl;
	fragTrap.vaulthunter_dot_exe(str);
	fragTrap.vaulthunter_dot_exe(str);
	std::cout << fragTrap.name << "'s energy points: " << fragTrap.energyPoints << std::endl;
	fragTrap.rangedAttack(str);
	fragTrap.meleeAttack(str);
	std::cout << fragTrap.name << "'s hit points: " << fragTrap.hitPoints << std::endl;
	fragTrap.takeDamage(35);
	std::cout << fragTrap.name << "'s hit points: " << fragTrap.hitPoints << std::endl;
	fragTrap.takeDamage(105);
	std::cout << fragTrap.name << "'s hit points: " << fragTrap.hitPoints << std::endl;
	fragTrap.beRepaired(35);
	std::cout << fragTrap.name << "'s hit points: " << fragTrap.hitPoints << std::endl;
	fragTrap.beRepaired(95);
	std::cout << fragTrap.name << "'s hit points: " << fragTrap.hitPoints << std::endl;

	return (0);
}