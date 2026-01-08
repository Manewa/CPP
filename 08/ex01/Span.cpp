#include "Span.hpp"

Span::Span()
{	
	this->_maxSize = 0;
	this->_count = 0;
}

Span::Span(unsigned int N)
{
	this->_maxSize = N;
	this->_count = 0;
}

Span::Span(const Span& other)
{
	*this = other;
}

Span::&operator=(const Span& other)
{
	if (this == other)
		return (*this);
	this->_maxSize = other._maxSize;
	this->_store = other.store;
	this->_count = other.count;
	return (*this);
}

Span::~Span()
{}

const char *Span::Capacity::what() const throw() {return ("Error: Max capacity reached");}
const char *Span::NoNumber::what() const throw() {return ("Error: No number stored");}

void			Span::addNumber(const int N)
{
	if (this->_count >= this->_maxSize)
		throw Capacity();
	this->_store.push_back(N);
}

unsigned int	Span::shortestSpan()
{
	if (this->_count <= 0)
		throw NoNumber();
	
	int		diff = 0;
	int		min_diff = std::numeric_limits<int>::max();

	for (size_t i = 1; i < this->_count; i++)
	{
		diff = this->_store[i] - this->_store[i - 1];
		if (diff < min_diff)
			min_diff = diff;
	}
	return (min_diff);
}

unsigned int	Span::longestSpan()
{
	if (this->_count <= 0)
		throw NoNumber();
	
	sort(this->_store.begin(), this->_store.end());
	return (this->_store.back() - this->_store.front());
}
