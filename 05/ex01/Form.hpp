#pragma once
#include <iostream>
#include <exception>
#include "colors.hpp"

class Bureaucrat;

class Form {

public:

			Form();
			Form(std::string name, int sign, int exec);
			Form(const Form& other);
			Form& operator=(const Form& other);
			~Form();

	class	GradeTooHighException : public std::exception
	{
		public:
			const virtual char *what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			const virtual char *what() const throw();
	};

	class	AlreadySignedException : public std::exception
	{
		public:
			const virtual char *what() const throw();
	};

		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
				void	beSigned(const Bureaucrat& infos);

private:

			const std::string	_name;
			bool				_signed;
			const int			_gradeSign;
			const int			_gradeExe;

		
};

std::ostream& operator<<(std::ostream &os, const Form &infos);
