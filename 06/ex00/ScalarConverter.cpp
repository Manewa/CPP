#include "ScalarConverter.hpp"
#include "colors.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {return (void)other, *this;} 
ScalarConverter::~ScalarConverter()
{ std::cout << "Destructor called for ScaraConverter" << std::endl; }

void	ScalarConverter::convert(std::string conv)
{
	const char	*str;
	double		d;
	int			i;
	float		f;
	char		c = 0;

	str = conv.c_str();
	if (strlen(str) == 1 && !isdigit(*str))
		d = *str;
	else
		d = std::strtod(str, NULL);
	
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	/***   char   ***/

	if (i >= 32 && i <= 126)
	{
		c = i;
		std::cout << GREEN << "Char is : " << c << NEUTRAL << std::endl;
	}
	else
		std::cout << RED << "Not a printable character as a char." << NEUTRAL << std::endl;

	/***   int   ****/
	
	if (d >= INT_MIN && d <= INT_MAX && !std::isnan(d))
		std::cout << GREEN << "Int is :" << i << NEUTRAL << std::endl;
	else
		std::cout << RED << "Not a value for an integer !" << NEUTRAL << std::endl;
	


	std::cout << f << std::endl;
	std::cout << d << std::endl;
}
