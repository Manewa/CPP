#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other) 
	{
		std::cout << "Copy assignement operator called" << std::endl;
	}
    return *this;
}

ClapTrap::~ClapTrap() {};

std::string	ClapTrap::getName(void) { return (this->_name); }
int	ClapTrap::getDamage(void) 		{ return (this->_AttackDamage); }
int ClapTrap::getLife(void)			{ return (this->_EnergyPoints); }

void	ClapTrap::attack(const std::string &target)
{
	if (target.empty())
	{
		std::cout << "!! ERROR ERROR !! CRITICAL FAIL !! I would have killed it with my bare hands ! But you killed everyone !" << std::endl;
		return ;
	}
	if (this->_HitPoints == 0)
	{
		std::cout << "As you can see ... I'm dead ! DAMN REPAIR ME" << std::endl;
		return ;
	}
	if (this->_EnergyPoints == 0)
	{
		std::cout << "NO BATTERY ! Nooooooooooooooooooooooooo ... you gotta go without me ! Make your Master proud !" << std::endl;
		return ;
	}
	this->_EnergyPoints -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_HitPoints << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_EnergyPoints)
	{
		this->_HitPoints -= amount;
		std::cout << this->_name << " took " << amount << " damage !" << std :: endl;
	}
	else
	{
		std::cout << this->_name << " took " << this->_HitPoints << " damage !" << std :: endl;
		this->_HitPoints = 0;
	}
	if (this->_HitPoints == 0)
		std::cout << this->_name << " is out of combat !" << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPoints == 0)
	{
		std::cout << this->_name << " is out of combat and can not be repaired !" << std::endl;
		return ;
	}
	if (this->_EnergyPoints == 0)
	{
		std::cout << "NO BATTERY ! Nooooooooooooooooooooooooo ... you gotta go without me ! Make your Master proud !" << std::endl;
		return ;
	}
	this->_EnergyPoints -= 1;
	this->_HitPoints += amount;
	std::cout << this->_name << " repaired " << amount << " life points !" << std::endl;
}
