#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap	Clapi("Clapi");
	ClapTrap	Clapo("Clapo");
	ScavTrap	Scapin("Scapin");

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
	return (1) ;
}
