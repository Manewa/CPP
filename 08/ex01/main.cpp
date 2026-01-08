#include "Span.hpp"

int main(void)
{
	Span	span(10000);
//	size_t	i = 0;

	span.addNumber(6);
	span.addNumber(3);
	span.addNumber(9);
	span.addNumber(13);

	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;

}
