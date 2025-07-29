#include <ostream>
#include <iostream>
#include <string>
#include "phonebook.class.hpp"

void	EofEnding(phonebook book)
{
	std::cout << "Enf of File detected." << std::endl;
	book.Ex();
}

int	main(void)
{
	phonebook	book;
	std::string	buff;

	while (1)
	{
		std::cout << "Hey you ! You can either ADD, SEARCH or EXIT :" << std::endl;
		std::getline(std::cin, buff);
		if (std::cin.eof())
			EofEnding(book);
		else if (buff == "ADD")
			book.Add();
		else if (buff == "SEARCH")
			book.Search();
		else if (buff == "EXIT")
		{
			book.Ex();
			return (0);
		}
		else
			std::cout << "That's not a valid input !" << std::endl;
	}
	return (0);
}
