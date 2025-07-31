#include <string>
#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	stackZomb;

	stackZomb.Zombie::steName(name);
	stackZomb.Zombie::announce();
}
