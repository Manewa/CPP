#include "easyfind.hpp"
#include "colors.hpp"

int main (void)
{
	std::vector<int>	container;

	container.push_back(10);
	container.push_back(15);
	container.push_back(25);
	container.push_back(20);
	container.push_back(5);

	std::cout << YELLOW << "0 -> 10 // 1 -> 15 // 2 -> 25 // 3 -> 20 // 4 -> 5" << NEUTRAL << std::endl;
	for (int i = 0; i < 11; i++)
	{
		try
		{
			int	index = easyfind(container, i);
			std::cout << GREEN << i << " found at index " << index << NEUTRAL << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << i << " not found" << NEUTRAL << std::endl;
		}
	}
	return (0);
}
