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
			void		UpGrade();
			void		DownGrade();
			void		GradeTooHighException();
			void		GradeTooLowException();
			const std::string	getName();
			int					getGrade();
			const std::string	_name;
			int					_grade;
		
};

#endif

