#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 145, 137), _target("Default") {};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137), _target(target) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)

{
	if (this == &other)
		return (*this);
	this->_target = other._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::executeCForm(void) const
{
	std::string		file = this->_target + "_shrubbery";
	std::ofstream	out(file.c_str());

	if (!out.is_open())
	{
		std::cerr << RED << "Error\nCan not open " << NEUTRAL << file << std::endl;
		return ;
	}
	std::cout << GREEN << "Printing a tree in " << NEUTRAL << this->_target << std::endl;
	out << TREE;
	out.close();
	return ;
}
