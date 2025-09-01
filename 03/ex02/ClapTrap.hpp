#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

public:

			ClapTrap(void);
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& other);
			ClapTrap& operator=(const ClapTrap& other);
	virtual	~ClapTrap();

			void		attack(const std::string &target);
			void		takeDamage(unsigned int amount);
			void		beRepaired(unsigned int amount);
			std::string	getName(void);
			int			getDamage(void);
			int 		getLife(void);

protected:

			std::string		_name;
			unsigned int	_HitPoints;
			unsigned int	_EnergyPoints;
			unsigned int	_AttackDamage;

		
};

#endif

