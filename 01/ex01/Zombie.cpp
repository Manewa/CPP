#include <iostream>
#include "Zombie.hpp"


Zombie::Zombie(void)
{
	Zombie::setName("Default name");
	std::cout << "Zombie constructor called: " << Zombie::getName() << std::endl;
}

Zombie::Zombie(std::string name)
{
	Zombie::setName(name);
	std::cout << "Zombie constructor called: " << Zombie::getName() << std::endl;
}

Zombie::~Zombie(void)
{ std::cout << "Zombie destructor called: " << Zombie::getName() << std::endl; }


void	Zombie::setName(std::string const name)
{ this->name = name; }


std::string	Zombie::getName( void ) const { return name; }


void	Zombie::announce( void ) 
{ std::cout << Zombie::getName() << ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie	*newZombie(std::string name)
{
	Zombie	*heapZombie = new Zombie;

	heapZombie->Zombie::setName(name);
	return (heapZombie);
}
