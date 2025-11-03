#include "headers.hpp"

int main(void)
{
	/**** Good one ****/

	try
	{
		std::cout << YELLOW << "Try to create a 42 John :" << std::endl << NEUTRAL;
		Bureaucrat	John("John", 42);
		std::cout << John;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	std::cout << std::endl;
	/**** Error in constructor ****/

	try
	{
		std::cout<< YELLOW << "Test : 151 JohnTooLow" << std::endl << NEUTRAL;
		Bureaucrat	JohnTooLow("JohnTooLow", 151);
		std::cout << JohnTooLow;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	std::cout << std::endl;
	try
	{
		std::cout<< YELLOW << "Test : 0 JohnTooHigh" << std::endl << NEUTRAL;
		Bureaucrat	JohnTooHigh("JohnTooHigh", 0);
		std::cout << JohnTooHigh;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	std::cout << std::endl;

	/**** Error in grade modification ****/

	try
	{
		std::cout<< YELLOW << "Test : 150 JohnLowest - 1" << std::endl << NEUTRAL;
		Bureaucrat	JohnLowest("JohnLowest", 150);
		std::cout << JohnLowest;
		JohnLowest.DownGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	std::cout << std::endl;
	try
	{
		std::cout<< YELLOW << "Test : 1 JohnHighest + 1" << std::endl << NEUTRAL;
		Bureaucrat	JohnCEO("JohnCEO", 1);
		std::cout << JohnCEO;
		JohnCEO.UpGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	return (0);
}
