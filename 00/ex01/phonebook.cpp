#include "phonebook.class.hpp"
#include <iostream>
#include <iomanip>
#include <limits> 
#include <cstdlib>
#include <sstream>
#include <cstdio>

phonebook::phonebook(void) : _Iterator(0) {}
phonebook::~phonebook(void) {}

void	phonebook::Add(void)
{
	std::string buffer;

	if (_Iterator >= 8)
		std::cout << "PhoneBook is full. Overwriting oldest contact." << std::endl;

	int index = _Iterator % 8;

	std::cout << "First Name: ";
	std::getline(std::cin >> std::ws, buffer);
	_Dir[index].setFirstName(buffer);

	std::cout << "Last Name: ";
	std::getline(std::cin, buffer);
	_Dir[index].setLastName(buffer);

	std::cout << "Nickname: ";
	std::getline(std::cin, buffer);
	_Dir[index].setNickname(buffer);

	std::cout << "Phone Number: ";
	std::getline(std::cin, buffer);
	_Dir[index].setPhoneNumber(buffer);

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, buffer);
	_Dir[index].setSecret(buffer);

	_Iterator++;
}

static std::string truncate(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

bool	isnumber(const std::string& str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (!str.empty());
}

void	phonebook::Search(void)
{
	int			max = (_Iterator >= 8) ? 8 : _Iterator;
	int 		index;
	std::string	input;


	if (max == 0)
	{
		std::cout << "There is no contact yet !" << std::endl;
		return ;
	}


	std::cout 	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0 ; i < max ; i++) 
	{
		std::cout	<< std::setw(10) << i << "|"
					<< std::setw(10) << truncate(_Dir[i].getFirstName()) << "|"
					<< std::setw(10) << truncate(_Dir[i].getLastName()) << "|"
					<< std::setw(10) << truncate(_Dir[i].getNickname()) << std::endl;

	}


	std::cout << "Enter the index of the contact to display: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, input);
	if (!isnumber(input))
	{
		std::cout << "Invalid input, not a number !" << std::endl;
		return ;
	}
//
//
//
//
// MISS input is a string TO index, int (stoi do not exist in 98)
//
//
//
//
	if (index < 0 || index > max - 1)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Index !" << std::endl;
		return ;
	}


	std::cout << "First Name: "    << _Dir[index].getFirstName() << std::endl;
	std::cout << "Last Name: "     << _Dir[index].getLastName() << std::endl;
	std::cout << "Nickname: "      << _Dir[index].getNickname() << std::endl;
	std::cout << "Phone Number: "  << _Dir[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: "<< _Dir[index].getSecret() << std::endl;
}

void phonebook::Ex(void)
{
	std::cout << "Goodbye !" << std::endl;
	exit (0);
}
