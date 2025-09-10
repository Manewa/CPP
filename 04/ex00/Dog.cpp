#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	*this = other;
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Copy assignement constructor operator Dog called" << std::endl;
	return (*this);
}

Dog::~Dog() { std::cout << "Destructor Dog called" << std::endl; };

void	Dog::makeSound() const
{
		std::cout << "Ouaf Ouaf !" << std::endl;
}
