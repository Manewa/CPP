#ifndef	HUMAN_A_HPP
# define HUMAN_A_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

public :

	HumanA(std::string name, Weapon &weap);
	~HumanA(void);

	void		attack(void) const;

private :

	std::string	_name;
	Weapon		&_weap;

};

#endif
