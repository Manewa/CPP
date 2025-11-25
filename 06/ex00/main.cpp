#include "ScalarConverter.hpp"
#include <iostream>

int main ()
{
	std::string	i = "42.42";
	std::string	c = "42.";
	std::string	f = "nan";

	ScalarConverter::convert(c);
	ScalarConverter::convert(i);
	ScalarConverter::convert(f);
}

