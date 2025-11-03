#ifndef FORM_HPP
#define FORM_HPP

#include "headers.hpp"

class Form {

public:

			Form();
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

			std::string	getName();
			int			getGrade();
			void	beSigned(Bureaucrat infos);

private:

			const std::string	_name;
			bool				_signed;
			const int			_gradeSign;
			const int			_gradeExe;

		
};

std::ostream& operator<<(std::ostream &os, Form infos);

#endif

