#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array {

public:

			Array();
			Array(unsigned int n);
			Array(const Array& other);
			Array& operator=(const Array& other);
			~Array();

			T		&operator[](unsigned int n);
			const T	&operator[](unsigned int n) const;
			unsigned int	size(void) const;


	class OutOfBounds : public std::exception
	{
		public: 
			const virtual char *what() const throw();
	};

private:
			T					*_ptr;
			unsigned int		_n;
};

template<typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &rhs);

#include "Array.tpp" 

#endif

