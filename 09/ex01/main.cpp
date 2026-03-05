#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: Not exactly two arguments" << std::endl;
		return (1);
	}
	
	std::string	calc = argv[1];

	try
	{
		RPN	RPN(calc);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << NEUTRAL << std::endl;
		return (1);
	}
	return (0);
}
