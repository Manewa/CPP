#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "Default name";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap Constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap Constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap Copy called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other) 
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other) 
	{
		this->_name = other._name;
		this->_AttackDamage = other._AttackDamage;
		this->_EnergyPoints = other._EnergyPoints;
		this->_HitPoints = other._HitPoints;
	}
    return *this;
}

ScavTrap::~ScavTrap() {std::cout << "ScavTrap Destructor called for " << this->_name << std::endl;};

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is in Guard Mode." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
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
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage !" << std::endl;
}
