#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern {

public:

			Intern();
			Intern(const Intern& other);
			Intern& operator=(const Intern& other);
			~Intern();
			AForm	*makeForm(std::string nameform, std::string target) const;


private:

			std::string _validName[3];
};

#endif

