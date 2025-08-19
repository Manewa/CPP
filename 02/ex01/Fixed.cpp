#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = num << this->_decimal;
	
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(num * (1 << this->_decimal));
}


Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) 
	{
		std::cout << "Copy assignement operator called" << std::endl;
    	setRawBits(other.getRawBits());
	}
    return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}


float	Fixed::toFloat(void) const
{
	return(static_cast<float>(this->_value) / (1 << this->_decimal));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_decimal);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}
