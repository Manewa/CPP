#include "Zombie.hpp"
#include <string>

Zombie	*newZombie(std::string name)
{
	Zombie	*heapZombie = new Zombie;

	heapZombie->Zombie::setName(name);
	return (heapZombie);
}
