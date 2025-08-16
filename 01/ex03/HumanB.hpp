#ifndef	HUMAN_B_HPP
# define HUMAN_B_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

public :

	HumanB(std::string);
	~HumanB(void);

	void		setWeapon(Weapon &Weapon);
	void		attack(void) const;

private :

	std::string	_name;
	Weapon		*_weap;

};

#endif
