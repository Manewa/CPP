#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap	Clapi("Clapi");
	ClapTrap	Clapo("Clapo");

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
	Clapi.beRepaired(10);
	Clapi.beRepaired(10);
	Clapi.beRepaired(10);
	Clapi.beRepaired(10);
	Clapi.beRepaired(10);
	Clapi.beRepaired(10);
	Clapi.beRepaired(10);
	Clapi.beRepaired(10);
	Clapi.attack(Clapo.getName());
	Clapo.takeDamage(Clapi.getDamage());
	return (1) ;
}
