#ifndef	HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

public :

	HumanA(void);
	~HumanA(void);

	std::string	&getType(void) const;
	void		setType(std::string);
	std::string	getName(void) const;
	void		setName(std::string);

private :

	std::string	_name;
	Weapon		weapon;

};

#endif
