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
	std::string	str[2] = {"- Coucou !", "- You good ?"};

	std::cout << YELLOW << "Print int from 0 to 4 :" << NEUTRAL << std::endl << std::endl;
	iter(tab, 5, add_printint);
	std::cout << std::endl << YELLOW << "Tab[0] shoud be 1 :" << NEUTRAL << std::endl << std::endl;
	std::cout << "Tab[0] in main : " << tab[0] << std::endl;
	std::cout << std::endl << YELLOW << "Print a tab of 2 string :" << NEUTRAL << std::endl << std::endl;
	iter(str, 2, print<std::string>);
/*
	std::cout << std::endl << YELLOW <<  "Should not crash" << NEUTRAL << std::endl;
	std::string	str_nul[2];
	iter(str_nul, 3, print<std::string>);
*/}
