#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <limits>

class Span {

public:

			Span();
			Span(unsigned int N);
			Span(const Span& other);
			Span& operator=(const Span& other);
			~Span();

			void			addNumber(int N);
			unsigned int	shortestSpan();
			unsigned int	longestSpan();

			class Capacity : public std::exception
			{
				public :
					const virtual char* what() const throw();
			};

			class NoNumber : public std::exception
			{
				public :
					const virtual char* what() const throw();
			};
private:

			unsigned int 		_maxSize;
			unsigned int		_count;
			std::vector<int>	_store;
		
};

#endif

