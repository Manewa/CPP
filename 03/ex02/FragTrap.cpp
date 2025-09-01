#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "Default name";
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap Constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap Constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap Copy called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& other) 
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

FragTrap::~FragTrap() {std::cout << "FragTrap Destructor called for " << this->_name << std::endl;};

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Five guys ! //// Yeah yeah yeah !" << std::endl;
}

void	FragTrap::attack(const std::string &target)
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
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_HitPoints << " points of damage !" << std::endl;
}
