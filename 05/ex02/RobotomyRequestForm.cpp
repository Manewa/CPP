#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 145, 137), _target("Default") {};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 145, 137), _target(target) {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)

{
	if (this == &other)
		return (*this);
	this->_target = other._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}
