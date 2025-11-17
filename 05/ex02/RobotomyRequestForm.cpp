#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 72, 45), _target("Default") {};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45), _target(target) {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)

{
	if (this == &other)
		return (*this);
	this->_target = other._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::executeCForm() const
{
	std::srand(std::time(NULL));

	std::cout << GREY << "Dring drill drrrrrr dong diiing SPLASH ..." << NEUTRAL << std::endl;
	if (std::rand() %2)
		std::cout << GREEN << this->_target << " has been robotomized !" << NEUTRAL << std::endl;
	else
		std::cout << RED << this->_target << " is still the same. Robotomy failed ..." << NEUTRAL << std::endl;
	return ;
}
