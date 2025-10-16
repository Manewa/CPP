#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

public:

			Bureaucrat();
			Bureaucrat(const std::string, int grade);
			Bureaucrat(const Bureaucrat& other);
			Bureaucrat& operator=(const Bureaucrat& other);
			~Bureaucrat();


private:

			void		GradeTooHighException();
			void		GradeTooLowException();
			std::string	getName();
			int			getGrade();
			std::string	_name;
			int			_grade;
		
};

#endif

