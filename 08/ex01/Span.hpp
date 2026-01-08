#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <limits>
#include <ctime>

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

		//	Getters

			unsigned int		getCount( void ) const;
			unsigned int		getValueAt(unsigned int index) const;

private:

			unsigned int 		_maxSize;
			unsigned int		_count;
			std::vector<int>	_store;
		
};

std::ostream&	operator<<(std::ostream& o, const Span& rhs);

#endif

