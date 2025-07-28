#include <ostream>
#include <iostream>

void	EofEnding(phonebook book)
{
	std::cout << "Enf of File detected." << std::endl;
	return (0);
}

int	main(void)
{
	phonebook	book;
	std::string	buff;

	std::cout << "Hey you ! You can either ADD, SEARCH or EXIT :" << std::endl;

	while (1)
	{
		std::cin >> buff;
		if (buff == "ADD")
			phonebook::Add(book);
		else if (buff == "SEARCH")
			phonebook::Search(book);
		else if (buff == "EXIT")
			return (std::Ex(book));
		else
			std::cout << "That's not a valid input !" << std::endl;
	}
	return (0);
}
