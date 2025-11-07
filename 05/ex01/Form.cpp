#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("DefaultName"), _gradeSign(150), _gradeExe(150) 
{
	this->_signed = 0;
	return ;
}

Form::Form(std::string name, int sign, int exe) : _name(name), _gradeSign(sign), _gradeExe(exe)
{
	if (sign > 150)
		throw Form::GradeTooLowException();
	else if (sign < 1)
		throw Form::GradeTooHighException();
	this->_signed = 0;
	std::cout << "Form Constructor called for " << *this << std::endl;
	return ;
}

Form::Form(const Form& other) : _name(other._name), _gradeSign(other._gradeSign), _gradeExe(other._gradeExe)
{
	*this = other;
	std::cout << "Copy Constructor called for " << *this << std::endl;
	return ;
}

Form	&Form::operator=(const Form& other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	std::cout << "Copy assignement constructor called for " << *this << std::endl;
	return (*this);
}


Form::~Form()
{
	std::cout << RED << "Destrcutor" << NEUTRAL << "called for " << *this << std::endl;
}

const char	*Form::GradeTooHighException::what() const throw()
{	return ("Grade is too high !"); }

const char	*Form::GradeTooLowException::what() const throw()
{	return ("Grade is too Low !"); }

const char	*Form::AlreadySignedException::what() const throw()
{	return ("The form has already been signed !"); }

std::string	Form::getName() const { return (this->_name); }
int			Form::getSignGrade() const { return (this->_gradeSign); }
int			Form::getExecGrade() const { return (this->_gradeExe); }

void	Form::beSigned(const Bureaucrat& infos)
{
	if (infos.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else if (this->_signed == 1)
		throw Form::AlreadySignedException();
	else
		this->_signed = 1;
}

std::ostream& operator<<(std::ostream& os, const Form& infos)
{
	os << GREEN << infos.getName() << NEUTRAL << ", need " << GREEN << infos.getSignGrade()
		<< NEUTRAL << " to be signed and " << GREEN << infos.getExecGrade() << NEUTRAL << " to be executed."  << std::endl;
	return (os);
}

