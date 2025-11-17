#pragma once

#include <iostream>
#include <exception>
#include "colors.hpp"
#include "AForm.hpp"

class Bureaucrat {

public:

			Bureaucrat();
			Bureaucrat(const std::string, int grade);
			Bureaucrat(const Bureaucrat& other);
			Bureaucrat& operator=(const Bureaucrat& other);
			~Bureaucrat();

			void		UpGrade();
			void		DownGrade();
			const std::string	getName() const;
			int					getGrade() const;
			void		signForm(AForm &infos);
			void		executeForm(AForm const & form) const;

	class GradeTooHighException : public std::exception
	{
		public:
		const virtual char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const virtual char *what() const throw();
	};

private:
			const std::string	_name;
			int					_grade;
		
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& infos);
