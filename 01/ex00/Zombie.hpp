#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

public :

	Zombie(void);
	Zombie(const char *name);
	~Zombie(void);

	std::string	getName(void) const;
	void		setName(std::string);
	void 		announce(void);

private :

	std::string	name;

} ;

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
