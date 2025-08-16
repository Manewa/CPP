#ifndef	HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {

public :

	Harl(void);
	~Harl(void);


	void	complain(std::string level) const;

private :

	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;

	void		(Harl::*_function[4])(void) const;
	std::string	_level[4];
};

#endif
