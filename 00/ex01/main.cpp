#include <ostream>
#include <iostream>

int	main(void)
{
	int	exit = 0;
	std::string	buff;

	std::cout << "Hey you ! You can either ADD, SEARCH or EXIT :" << std::endl;

	while (exit == 0)
	{
		std::cin >> buff;
		if (buff == "ADD")
			phonebook::Add;
		else if (buff == "SEARCH")
			std::cout << "You said SEARCH !" << std::endl;
		else if (buff == "EXIT")
			exit = 1;
	}
	return (0);
}
