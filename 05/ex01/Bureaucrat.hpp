#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "headers.hpp"

class Bureaucrat {

public:

			Bureaucrat();
			Bureaucrat(const std::string, int grade);
			Bureaucrat(const Bureaucrat& other);
			Bureaucrat& operator=(const Bureaucrat& other);
			~Bureaucrat();

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

			void		UpGrade();
			void		DownGrade();
			const std::string	getName() const;
			int					getGrade() const;
//			void		signForm(Form infos);

private:
			const std::string	_name;
			int					_grade;
		
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& infos);

#endif

