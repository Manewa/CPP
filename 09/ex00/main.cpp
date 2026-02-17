#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Error in arguments." << NEUTRAL << std::endl;
		return (1);
	}

	try
	{
		BitcoinExchange	class_map(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << NEUTRAL << std::endl;
		return (1);
	}
	


	return (0);
}
