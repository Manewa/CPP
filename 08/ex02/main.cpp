#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> a;

	a.push(0);
	std::cout << YELLOW << "First is 0 : " << NEUTRAL << a.top() << std::endl;
	a.push(1);
	std::cout << YELLOW << "Last is 1 : " << NEUTRAL << a.top() << std::endl;
	a.push(2);
	std::cout << YELLOW << "Last is 2 : " << NEUTRAL << a.top() << std::endl;
	a.pop();
	std::cout << YELLOW << "First is 0 : " << NEUTRAL << a.top() << std::endl;
	std::cout << YELLOW << "Last is 1 : " << NEUTRAL << a.top() << std::endl;
	
	a.push(100);
	a.push(50);
	a.push(25);

	std::cout << MAGENTA << "Size is : " << a.size() << NEUTRAL << std::endl;
	MutantStack<int>::iter it = a.begin();
	MutantStack<int>::iter it_end = a.end();

	std::cout << YELLOW << "We should have 0 1 100 50 25 :" << NEUTRAL << std::endl;
	while (it != it_end)
	{
		std::cout << *it << std::endl;
		it++;
	}
	return (0);
}
