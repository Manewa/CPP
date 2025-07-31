#include "Zombie.hpp"
#include <string>

int main (void)
{
	std::string	*name;
	zombie	zomb;

	name << "foo";
	zomb.Zombie::setName(name);
	std::cout << zomb.Zombie::getName << std::endl;
}
