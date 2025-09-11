#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	this->_brain = new Brain(*other._brain);
	*this = other;
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	std::cout << "Copy assignement constructor operator Cat called" << std::endl;
	return (*this);
}

Cat::~Cat() 
{ 
	delete(this->_brain);
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound() const
{
		std::cout << "Meow Meow !" << std::endl;
}
