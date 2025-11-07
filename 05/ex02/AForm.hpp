#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class AForm {

public:

			AForm();
			AForm(std::string name, int sign, int exec);
			AForm(const AForm& other);
			AForm& operator=(const AForm& other);
			~AForm();

protected:

			virtual void concreteClass() const;

private:

		
};

#endif
