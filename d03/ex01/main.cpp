#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

	std::cout << std::endl;

	ScavTrap scavTrap("Scav Robot");
	scavTrap.rangedAttack(str);
	scavTrap.meleeAttack(str);
	std::cout << scavTrap.name << " hit points: " << scavTrap.hitPoints << std::endl;
	scavTrap.takeDamage(30);
	std::cout << scavTrap.name << " hit points: " << scavTrap.hitPoints << std::endl;
	scavTrap.takeDamage(85);
	std::cout << scavTrap.name << " hit points: " << scavTrap.hitPoints << std::endl;
	scavTrap.beRepaired(50);
	std::cout << scavTrap.name << " hit points: " << scavTrap.hitPoints << std::endl;
	scavTrap.beRepaired(90);
	std::cout << scavTrap.name << " hit points: " << scavTrap.hitPoints << std::endl;
	scavTrap.takeDamage(105);
	std::cout << scavTrap.name << " hit points: " << scavTrap.hitPoints << std::endl;
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();

	return (0);
}