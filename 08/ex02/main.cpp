#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> a;

	a.push(0);
	std::cout << YELLOW << "First is 0 : " << NEUTRAL << a.top() << std::endl;
}
