#include "Zombie.hpp"
#include <string>

int main (void)
{
	Zombie	*constructor = new Zombie("Jeanne la Constructrice");
	constructor->announce();
	delete(constructor);
	Zombie	*zomb = newZombie("Jean");
	zomb->announce();
	delete(zomb);

	randomChump("Pouet");
	return (0);
}
