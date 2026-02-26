#include "whatever.hpp"
#include "colors.hpp"

int main()
{
	int one = 1;
	int zero = 0;
	char up = 'a';
	char down = 'b';

	std::cout << BLUE <<  "(Int) Min is : " << min(one, zero) << NEUTRAL << std::endl;
	std::cout << GREEN << "(Int) Max is : " << max(one, zero) << NEUTRAL << std::endl;
	std::cout << std::endl;
	std::cout << BLUE << "(Char) Min is : " << min(up, down) << NEUTRAL << std::endl;
	std::cout << GREEN << "(Char) Max is : " << max(up, down) << NEUTRAL << std::endl;
	std::cout << std::endl;
	std::cout << GREY << "Now we know each valeur, i'm about to swap them" << NEUTRAL << std::endl;
	swap(one, zero);
	swap(up, down);
	std::cout << YELLOW << "Up was a, now is : " << up << NEUTRAL << std::endl;
	std::cout << YELLOW << "Down was b, now is : " << down << NEUTRAL << std::endl;
	std::cout << YELLOW << "One was 1, now is : " << one << NEUTRAL << std::endl;
	std::cout << YELLOW << "Zero was 0, now is : " << zero << NEUTRAL << std::endl;

	int a = 2;
	int b = 3;
	
	::swap(a, b);
	std::cout << std::endl;
	std::cout << YELLOW << "a = " << a << ", b = " << b << NEUTRAL << std::endl;
	std::cout << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << std::endl;
	std::cout << YELLOW << "c = " << c << ", d = " << d << NEUTRAL <<std::endl;
	std::cout << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
