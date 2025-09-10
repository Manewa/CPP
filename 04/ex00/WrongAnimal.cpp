#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Copy assignement constructor operator WrongAnimal called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() { std::cout << "Destructor WrongAnimal called" << std::endl; };


void	WrongAnimal::makeSound() const
{
		std::cout << "Oh there is an animal ! What is it ?" << std::endl;
}

std::string	WrongAnimal::getType( void ) const { return (this->_type) ; }
