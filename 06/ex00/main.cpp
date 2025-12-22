#include "ScalarConverter.hpp"
#include <iostream>

int main ()
{
	std::string	i = "pouet";
	std::string	c = "42.0fgg";
	std::string	f = "nan";

	ScalarConverter::convert(c);
	ScalarConverter::convert(i);
	ScalarConverter::convert(f);
}

