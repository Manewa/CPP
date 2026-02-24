#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <limits.h>
#include <cstring>
#include "colors.hpp"

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
