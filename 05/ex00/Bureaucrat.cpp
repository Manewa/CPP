#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cerr << "No grade" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	this->_name = name;
	this->_grade = grade;
	std::cout << "Bureaucrat Constructor called for " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
	std::cout << "Copy Constructor called for " << this->_name << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_grade = other._grade;
	}
	std::cout << "Copy assignement constructor called for " << this->_name << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat() { std::cout << "Destructor called for " << this->_name; };


void	Bureaucrat::GradeTooHighException()
{}
void	GradeTooLowException();
void	getName();
void	getGrade();
