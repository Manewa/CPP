#include "iter.hpp"
#include "colors.hpp"

void	print(void *n)
{
	std::cout << n << std::endl;
}

int main()
{
	int	tab[5] = {0, 1, 2, 3, 4};

	iter(tab, 5, print);
}
