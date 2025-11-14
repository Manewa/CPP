#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 25, 5), _target("Default") {};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 25, 5), _target(target) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)

{
	if (this == &other)
		return (*this);
	this->_target = other._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
