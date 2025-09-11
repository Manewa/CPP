#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Constructor Animal called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	*this = other;
	std::cout << "Copy constructor Animal called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Copy assignement constructor operator Animal called" << std::endl;
	return (*this);
}

Animal::~Animal() { std::cout << "Destructor Animal called" << std::endl; };


void	Animal::makeSound() const
{
		std::cout << "Oh there is an animal ! What is it ?" << std::endl;
}

std::string	Animal::getType( void ) const { return (this->_type) ; }
