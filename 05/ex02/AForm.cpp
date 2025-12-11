#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("DefaultName"), _gradeSign(150), _gradeExe(150) 
{
	this->_signed = 0;
	return ;
}

AForm::AForm(std::string name, int sign, int exe) : _name(name), _gradeSign(sign), _gradeExe(exe)
{
	if (sign > 150)
		throw AForm::GradeTooLowException();
	else if (sign < 1)
		throw AForm::GradeTooHighException();
	this->_signed = 0;
	std::cout << "AForm Constructor called for " << *this << std::endl;
	return ;
}

AForm::AForm(const AForm& other) : _name(other._name), _gradeSign(other._gradeSign), _gradeExe(other._gradeExe)
{
	*this = other;
	std::cout << "Copy Constructor called for " << *this << std::endl;
	return ;
}

AForm	&AForm::operator=(const AForm& other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	std::cout << "Copy assignement constructor called for " << *this << std::endl;
	return (*this);
}


AForm::~AForm()
{
	std::cout << "Destrcutor" << " called for " << this->_name << std::endl;
}

const char	*AForm::GradeTooHighException::what() const throw()
{	return ("Grade is too high !"); }

const char	*AForm::GradeTooLowException::what() const throw()
{	return ("Grade is too Low !"); }

const char	*AForm::AlreadySignedException::what() const throw()
{	return ("The form has already been signed !"); }

const char	*AForm::NotSignedFormException::what() const throw()
{	return ("The form is not signed !"); }

std::string	AForm::getName() const { return (this->_name); }
int			AForm::getSignGrade() const { return (this->_gradeSign); }
int			AForm::getExecGrade() const { return (this->_gradeExe); }

void	AForm::beSigned(const Bureaucrat& infos)
{
	if (infos.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	else if (this->_signed == 1)
		throw AForm::AlreadySignedException();
	else
	{
		this->_signed = 1;
		std::cout << GREEN << infos.getName() << " signed the form !" << NEUTRAL << std::endl;
	}
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (this->_signed == 0)
		throw AForm::NotSignedFormException();
	else if (executor.getGrade() > this->_gradeExe)
		throw AForm::GradeTooLowException();
	else
		this->executeCForm();
}

std::ostream& operator<<(std::ostream& os, const AForm& infos)
{
	os << GREEN << infos.getName() << NEUTRAL << ", need " << GREEN << infos.getSignGrade()
		<< NEUTRAL << " to be signed and " << GREEN << infos.getExecGrade() << NEUTRAL << " to be executed."  << std::endl;
	return (os);
}

void	AForm::executeCForm() const {}
