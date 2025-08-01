#include "Zombie.hpp"
#include <string>

void	randomChump(std::string name)
{
	Zombie	stackZomb;
	
	stackZomb.setName(name);
	stackZomb.Zombie::announce();
}
