#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << "b is : " << b << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	Fixed c(1);
	Fixed d(2);

	std::cout << "Min is 1 and we have : " <<  Fixed::min(c, d) << std::endl;
	std::cout << "Max is 2, and we have : " << Fixed::max(c, d) << std::endl;
	std::cout << std::endl;
	
	std::cout << "2 / 1 = " << d / c << std::endl;
	std::cout << "2 * 2 = " << d * d << std::endl;
	std::cout << "1 - 2 = " << c - d << std::endl;
	std::cout << "1 + 2 = " << c + d << std::endl;

	if (c != d)
		std::cout << "c is different than d" << std::endl;
	Fixed e(d);
	if (e == d)
		std::cout << "e is equal to d" << std::endl;
	if (e != d)
		std::cout << "Should not appear" << std::endl;
	return (0);
}
