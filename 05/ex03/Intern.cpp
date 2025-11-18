#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
	this->_validName[0] = "Shrubbery";
	this->_validName[1] = "Pardon";
	this->_validName[2] = "Robotomy";
}

Intern::Intern(const Intern& other)
{
	*this = other;
	std::cout << "Copy Contrustor called for an Intern" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	if (this != &other)
	{
		this->_validName[0] = other._validName[0];
		this->_validName[1] = other._validName[1];
		this->_validName[2] = other._validName[2];
	}
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor called for an intern" << std::endl;
}

AForm	*Intern::makeForm(std::string nameform, std::string target) const
{
	int i = 0;
	AForm	*newForm = NULL;

	while (i < 3)
	{
		if (nameform == this->_validName[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
		{
			std::cout << BLUE << "Intern creates Shrubbery Creation form." << NEUTRAL << std::endl;
			newForm = new ShrubberyCreationForm(target);
			break ;
		}
		case 1:
		{
			std::cout << BLUE << "Intern creates Presidential Pardon form." << NEUTRAL << std::endl;
			newForm = new PresidentialPardonForm(target);
			break ;
		}
		case 2:
		{
			std::cout << BLUE << "Intern creates Robotomy Request form." << NEUTRAL << std::endl;
			newForm = new RobotomyRequestForm(target);
			break ;
		}
		case 3:
		{
			std::cout << RED << "Intern can not create that kind of form !" << NEUTRAL << std::endl;
			return (NULL);
		}
	}
	return (newForm);
}
