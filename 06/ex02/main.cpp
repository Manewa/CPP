#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	randnum;

	std::srand(time(NULL));
	randnum = rand() % 3;
	switch (randnum)
	{
		case (0) :
			return (new A);
		case (1) :
			return (new B);
		case (2) :
			return (new C);
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (!p)
		std::cout << RED << "*p : Is null" << NEUTRAL << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << GREEN << "*p : The type is A" << NEUTRAL << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << GREEN << "*p : The type is B" << NEUTRAL << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << GREEN << "*p : The type is C" << NEUTRAL << std::endl;
	return ;
}

void	identify(Base &p)
{
	int	done = 0;
	try
	{
		A	a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << YELLOW << "&p : The type is A" << NEUTRAL << std::endl;
		done = 1;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		B	b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << YELLOW << "&p : The type is B" << NEUTRAL << std::endl;
		done = 1;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		C	c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << YELLOW << "&p : The type is C" << NEUTRAL << std::endl;
		done = 1;
	}
	catch (std::exception &e)
	{
	}
	if (done == 0)
		std::cout << RED << "&p : Not a A, B or C type" << NEUTRAL << std::endl;
}

int main ()
{
	Base	*p;
	Base	*a = 0;

	p = generate();
	identify(p);
	identify (*p);
	identify(a);
	identify(*a);
}
