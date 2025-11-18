#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter {

public:

			ScalarConverter();
			ScalarConverter(const ScalarConverter& other);
			ScalarConverter& operator=(const ScalarConverter& other);
			virtual ~ScalarConverter();


private:
			
			static void	convert(std::string conv);
		
};

#endif
