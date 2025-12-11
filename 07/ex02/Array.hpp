#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {

public:

			Array();
			Array(const int n);
			Array(const Array& other);
			Array& operator=(const Array& other);
			~Array();

			T		&operator[](unsigned int n);
			const T	&operator[](unsigned int n) const;

private:

			int		size();
		
};

#endif

