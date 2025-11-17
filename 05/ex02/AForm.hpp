#pragma once
#include <iostream>
#include <exception>
#include <fstream>
#include "colors.hpp"

class Bureaucrat;

class AForm {

public:

			AForm();
			AForm(std::string name, int sign, int exec);
			AForm(const AForm& other);
			AForm& operator=(const AForm& other);
			~AForm();

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

	class	NotSignedFormException : public std::exception
	{
		public:
			const virtual char *what() const throw();
	};

		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void	beSigned(const Bureaucrat& infos);
		void	execute(Bureaucrat const &executor) const;

protected:
		
		virtual void	executeCForm() const;

private:

			const std::string	_name;
			bool				_signed;
			const int			_gradeSign;
			const int			_gradeExe;

		
};

std::ostream& operator<<(std::ostream &os, const AForm &infos);
