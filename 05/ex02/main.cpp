#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void)
{
	Bureaucrat	*John41 = 0;
	Bureaucrat	*John43 = 0;
	Form		*FourtyTwo = 0;
	/**** Good one ****/

	try
	{
		std::cout << YELLOW << "Try to create a 41 John41 :" << std::endl << NEUTRAL;
		John41 = new Bureaucrat("John41", 41);
		std::cout << *John41;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "Try to create a 43 John43 :" << std::endl << NEUTRAL;
		John43 = new Bureaucrat("John43", 43);
		std::cout << *John43;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	std::cout << std::endl;

	/*** Create a form ***/

	try
	{
		std::cout << YELLOW << "Try to create a FourtyTwo Form : " << std::endl << NEUTRAL;
		FourtyTwo = new Form("FourtyTwo", 42, 42);
		std::cout << *FourtyTwo;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Try to create a OneFiftyOne Form : " << std::endl << NEUTRAL;
		Form	OneFiftyOne("OneFiftyOne", 151, 151);
		std::cout << OneFiftyOne;
	}
	catch (std::exception &e)
	{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Try to create a Zero Form : " << std::endl << NEUTRAL;
		Form	Zero("Zero", 0, 0);
		std::cout << Zero;
	}
	catch (std::exception &e)
		{ std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	/*** Signed Form ***/

	try
	{
		std::cout << YELLOW << "John41 tries to sign a 42 form :" << std::endl << NEUTRAL;
		John41->signForm(*FourtyTwo);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "John43 tries to sign a 42 form :" << std::endl << NEUTRAL;
		John43->signForm(*FourtyTwo);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	
	try
	{
		std::cout << YELLOW << "John41 tries to sign a 42 form :" << std::endl << NEUTRAL;
		John41->signForm(*FourtyTwo);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;
	
	delete (John41);
	delete (John43);
	delete (FourtyTwo);

	return (0);
}
