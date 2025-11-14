#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cerr << "No grade" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
		this->_grade = other._grade;
	}
	std::cout << "Copy assignement constructor called for " << this->_name << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat() { std::cout << "Destructor called for " << this->_name << std::endl; };


const char	*Bureaucrat::GradeTooHighException::what() const throw()
{	return ("Grade is too high !"); }

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{	return ("Grade is too Low !"); }

const std::string	Bureaucrat::getName() const
{	return (this->_name); }

int	Bureaucrat::getGrade() const
{	return (this->_grade); }

void		Bureaucrat::UpGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::DownGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& infos)
{
	os << GREEN << infos.getName() << NEUTRAL << ", bureaucrat grade " << GREEN << infos.getGrade() << NEUTRAL << " ";
	return (os);
}

void	Bureaucrat::signForm(Form &infos)
{
	try 
	{ 
		infos.beSigned(*this);
		std::cout << GREEN <<  *this << GREEN <<  "signed the form " << infos.getName() <<  NEUTRAL << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << *this << RED <<  "can not sign the form " << infos.getName() << " : " << e.what() << NEUTRAL << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	std::cout << *this << " attempts to execute " << form << std::endl;
	AForm.execute(*this);
}

