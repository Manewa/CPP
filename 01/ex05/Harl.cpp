#include "Harl.hpp"

Harl::Harl(void)
{
	this->_function[0] = &Harl::debug;
	this->_level[0] = "DEBUG";

	this->_function[1] = &Harl::info;
	this->_level[1] = "INFO";

	this->_function[2] = &Harl::warning;
	this->_level[2] = "WARNING";

	this->_function[3] = &Harl::error;
	this->_level[3] = "ERROR";
}

Harl::~Harl(void){};

void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) const
{
	int	i = 0;

	while (i < 4)
	{
		if (level == this->_level[i])
		{
			(this->*_function[i])();
			return ;
		}
		i++;
	}
}
