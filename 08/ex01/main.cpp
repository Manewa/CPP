#include "Span.hpp"
#include "colors.hpp"

int main(void)
{
	Span	span4_n_10(4);
	span4_n_10.addNumber(6);
	span4_n_10.addNumber(3);
	span4_n_10.addNumber(9);
	span4_n_10.addNumber(13);

	std::cout << YELLOW << "Shortest should be 3 and longest should be 10" << NEUTRAL << std::endl;
	try
	{ std::cout << "Shortest is " << span4_n_10.shortestSpan() << std::endl; }
	catch (std::exception &e)
	{
		std::cerr << RED <<  e.what() << NEUTRAL << std::endl;
	}
	try
	{ std::cout << "Longest is " << span4_n_10.longestSpan() << std::endl;} 
	catch (std::exception &e)
	{
		std::cerr << RED <<  e.what() << NEUTRAL << std::endl;
	}

	std::cout << std::endl << YELLOW << "Try to fill with 10k numbers" << NEUTRAL << std::endl << std::endl;

	Span	TenK(10000);
	size_t	i = 0;
	std::srand(std::time(NULL));
	while (i < 10000)
	{
		TenK.addNumber(std::rand() % 100000);
		i++;
	}
	try
	{ 
		std::cout << "Shortest is " << TenK.shortestSpan() << std::endl;
		std::cout << "Longest is " << TenK.longestSpan() << std::endl;
		std::cout << GREEN << TenK << NEUTRAL << std::endl;
		TenK.addNumber(1);

	}
	catch (std::exception &e)
	{
		std::cerr << RED <<  e.what() << NEUTRAL << std::endl;
	}

	Span	empty;

	std::cout << std::endl << YELLOW << "should be error because empty" << NEUTRAL << std::endl << std::endl;
	try
	{ std::cout << "Shortest is " << empty.shortestSpan() << std::endl; }
	catch (std::exception &e)
	{
		std::cerr << RED <<  e.what() << NEUTRAL << std::endl;
	}
	try
	{ std::cout << "Longest is " << empty.longestSpan() << std::endl;} 
	catch (std::exception &e)
	{
		std::cerr << RED <<  e.what() << NEUTRAL << std::endl;
	}

	std::cout << std::endl << YELLOW << "Let's add multiple number in a range" << NEUTRAL << std::endl << std::endl;

	Span	full(55);

	try
	{
		full.addMultipleNumbers(0, 54);
		std::cout << GREEN << full << NEUTRAL << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
