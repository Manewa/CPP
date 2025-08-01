#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {

public :

	Weapon(void);
	~Weapon(void);

	std::string	&getType(void) const;
	void		setType(std::string);

private :

	std::string	type;

} ;

#endif
