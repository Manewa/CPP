#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "Constructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
	std::cout << "Copy constructor WrongCat called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Copy assignement constructor operator WrongCat called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat() { std::cout << "Destructor WrongCat called" << std::endl; };

void	WrongCat::makeSound() const
{
		std::cout << "Meow Meow !" << std::endl;
}
