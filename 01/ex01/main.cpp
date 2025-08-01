#include "Zombie.hpp"
#include <string>

int main (void)
{
	Zombie	*zombieHord;

	zombieHord = zombieHorde(10, "Jeanne");
	call_horde(zombieHord, 10);
	die_horde(zombieHord);
	return (0);
}
