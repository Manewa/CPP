#include "Zombie.hpp"

void	die_horde(Zombie *zombieHorde)
{
	delete[]zombieHorde;
	return ;
}

void	call_horde(Zombie *zombieHorde, int n)
{
	int	i;

	for (i = 0; i < n; i++)
	{
		zombieHorde[i].announce();
	}
	return ;
}

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*zombieHorde = new Zombie[n];
	int	i;

	for (i = 0; i < n; i++)
	{
		zombieHorde[i].setName(name);
	}
	return (zombieHorde);
}
