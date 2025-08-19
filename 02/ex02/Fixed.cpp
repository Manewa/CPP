#include "Fixed.hpp"

/* 					Construct and destruct 						*/

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



/* 						Getter and setter 						*/


int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}


/* 						to int and to float 					*/

float	Fixed::toFloat(void) const
{
	return(static_cast<float>(this->_value) / (1 << this->_decimal));
}

int		Fixed::toInt(void) const
{
	return (static_cast<int>(this->_value >> this->_decimal));
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}



/* 						Operator overload						*/

bool	Fixed::operator>(const Fixed &rhs) const 
{
	return (this->_value > rhs._value);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->_value < rhs._value);
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->_value != rhs._value);
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->_value == rhs._value);
}

bool	Fixed::operator>=(const Fixed &rhs) const 
{
	return (this->_value >= rhs._value);
}

bool	Fixed::operator<=(const Fixed &rhs) const 
{
	return (this->_value <= rhs._value);
}

Fixed 	Fixed::operator+(const Fixed &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed 	Fixed::operator-(const Fixed &rhs) 
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed 	Fixed::operator*(const Fixed &rhs) 
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed 	Fixed::operator/(const Fixed &rhs) 
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++()
{
	this->_value += 1;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_value -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int rhs)
{
	Fixed	before(*this);

	(void)rhs;
	this->_value++;
	return (before);
}

Fixed	Fixed::operator--(int rhs)
{
	Fixed	before(*this);

	(void)rhs;
	this->_value--;
	return (before);
}


/*						min and max							*/

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a._value > b._value)
		return b;
	return a;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._value > b._value)
		return b;
	return a;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a._value > b._value)
		return a;
	return b;
}

const  Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._value > b._value)
		return a;
	return b;
}
