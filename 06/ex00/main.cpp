#include "ScalarConverter.hpp"
#include <iostream>

int main ()
{
	std::string	a = "42.0f";
	std::string	b = "-24";
	std::string	c = "42.24";
	std::string	d = "42.99";
	std::string	e = "pouet";
	std::string	f = "nan";
	std::string	g = "-inff";
	std::string	h = "+inf";

	std::cout << YELLOW << a << " as a parameter" << NEUTRAL << std::endl;
	ScalarConverter::convert(a);
	std::cout << std::endl;
	std::cout << YELLOW << b << " as a parameter" << NEUTRAL << std::endl;
	ScalarConverter::convert(b);
	std::cout << std::endl;
	std::cout << YELLOW << c << " as a parameter" << NEUTRAL << std::endl;
	ScalarConverter::convert(c);
	std::cout << std::endl;
	std::cout << YELLOW << d << " as a parameter" << NEUTRAL << std::endl;
	ScalarConverter::convert(d);
	std::cout << std::endl;
	std::cout << YELLOW << e << " as a parameter" << NEUTRAL << std::endl;
	ScalarConverter::convert(e);
	std::cout << std::endl;
	std::cout << YELLOW << f << " as a parameter" << NEUTRAL << std::endl;
	ScalarConverter::convert(f);
	std::cout << std::endl;
	std::cout << YELLOW << g << " as a parameter" << NEUTRAL << std::endl;
	ScalarConverter::convert(g);
	std::cout << std::endl;
	std::cout << YELLOW << h << " as a parameter" << NEUTRAL << std::endl;
	ScalarConverter::convert(h);
}

