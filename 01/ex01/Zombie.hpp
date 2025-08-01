#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

public :

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	std::string	getName(void) const;
	void		setName(std::string);
	void 		announce(void);

private :

	std::string	name;

} ;

Zombie	*zombieHorde(int n, std::string name);
void	call_horde(Zombie *zombieHorde, int n);
void	die_horde(Zombie *zombieHorde);

#endif
