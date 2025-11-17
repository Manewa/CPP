#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5), _target("Default") {};

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5), _target(target) {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), _target(other._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)

{
	if (this == &other)
		return (*this);
	this->_target = other._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::executeCForm(void) const
{
	std::cout << GREEN << this->_target << " has been pardoned by Zaphod Beeblerox" << NEUTRAL << std::endl;
	return ;
}
