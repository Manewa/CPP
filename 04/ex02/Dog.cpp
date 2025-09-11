#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	this->_brain = new Brain(*other._brain);
	*this = other;
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	std::cout << "Copy assignement constructor operator Dog called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete(this->_brain);
	std::cout << "Destructor Dog called" << std::endl;
}

void	Dog::makeSound() const
{
		std::cout << "Ouaf Ouaf !" << std::endl;
}
