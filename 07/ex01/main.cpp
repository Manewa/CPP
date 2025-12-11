#include "iter.hpp"
#include "colors.hpp"

template<typename T>
void	print(const T	&str)
{
	std::cout << str << std::endl;
}

void	add_printint(int &n)
{
	std::cout << "Before add : " << n << std::endl;
	n++;
	std::cout << "After add :" << n << std::endl;
}

int main()
{
	int	tab[5] = {0, 1, 2, 3, 4};
	std::string	str[2] = {"coucou", "ca va ?"};

	iter(tab, 5, add_printint);
	std::cout << "Tab[0] in main : " << tab[0] << std::endl;
	iter(str, 2, print<std::string>);
}
