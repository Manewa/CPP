#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	
	public:
   
   		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int num);
		Fixed(const float num);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:

	int					_value;
	const static int	_decimal = 8;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
