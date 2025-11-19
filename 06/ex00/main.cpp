#include "ScalarConverter.hpp"
#include <iostream>

int main ()
{
	std::string	i = "-inf";
	std::string	c = "+inff";
	std::string	f = "nan";

	ScalarConverter::convert(c);
	ScalarConverter::convert(i);
	ScalarConverter::convert(f);
}

