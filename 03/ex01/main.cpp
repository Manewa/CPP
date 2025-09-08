#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap	Clapi("Clapi");
	ClapTrap	Clapo("Clapo");
	ScavTrap	Scapin("Scapin");
	ScavTrap	Dead("DeathInComing");
	std::string	empty;

	Clapi.attack(Clapo.getName());
	Clapi.attack(empty);
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
	Scapin.attack(Dead.getName());
	Dead.takeDamage(Scapin.getDamage());
	Scapin.attack(Dead.getName());
	Dead.takeDamage(Scapin.getDamage());
	Scapin.attack(Dead.getName());
	Dead.takeDamage(Scapin.getDamage());
	Scapin.attack(Dead.getName());
	Dead.takeDamage(Scapin.getDamage());
	Scapin.attack(Dead.getName());
	Dead.takeDamage(Scapin.getDamage());
	Dead.beRepaired(10);	
	std::cout << std::endl;

	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.beRepaired(10);
	Scapin.attack(Clapi.getName());
	
	return (1) ;
}
