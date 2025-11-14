#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{

public:

			RobotomyRequestForm();
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(const RobotomyRequestForm& other);
			RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
			~RobotomyRequestForm();

protected:

			void	executeCForm() const;

private:

			std::string	_target;
		
};

#endif

