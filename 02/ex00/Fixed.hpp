#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	
	public:
   
   		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

	int					_value;
	const static int	_decimal = 8;

};

#endif
