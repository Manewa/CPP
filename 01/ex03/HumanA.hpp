#ifndef	HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <iostream>

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

} ;

#endif

HumanA class :

