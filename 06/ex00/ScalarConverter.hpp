#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>

class ScalarConverter {

public:

			static void	convert(std::string conv);


private:
			
			ScalarConverter();
			ScalarConverter(const ScalarConverter& other);
			ScalarConverter& operator=(const ScalarConverter& other);
			~ScalarConverter();
		
};

#endif
