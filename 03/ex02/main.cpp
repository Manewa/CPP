#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap	Clapi("Clapi");
	ClapTrap	Clapo("Clapo");
	ScavTrap	Scapin("Scapin");
	FragTrap	Froggy("Froggy");

	Clapi.attack(Clapo.getName());
	Clapo.takeDamage(Clapi.getDamage());
	Clapi.beRepaired(10);
	Clapi.attack(Clapo.getName());
	Clapo.takeDamage(20);
	Clapo.attack(Clapi.getName());
	Clapi.beRepaired(10);
	Clapo.beRepaired(10);
	Clapi.beRepaired(10);
	Clapi.beRepaired(10);
	Clapi.attack(Clapo.getName());
	Clapo.takeDamage(Clapi.getDamage());
	Clapi.attack(Scapin.getName());
	Scapin.takeDamage(Clapi.getDamage());
	Scapin.attack(Clapi.getName());

	std::cout << std::endl;
	std::cout << std::endl;
	

	Froggy.highFivesGuys();
	Scapin.attack(Froggy.getName());
	Froggy.takeDamage(Scapin.getDamage());
	Froggy.attack(Scapin.getName());
	return (1) ;
}
