#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	this->_type = "WrongDog";
	std::cout << "Constructor WrongDog called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other)
{
	*this = other;
	std::cout << "Copy constructor WrongDog called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Copy assignement constructor operator WrongDog called" << std::endl;
	return (*this);
}

WrongDog::~WrongDog() { std::cout << "Destructor WrongDog called" << std::endl; };

void	WrongDog::makeSound() const
{
		std::cout << "Ouaf Ouaf !" << std::endl;
}
