#include "Span.hpp"
#include <limits.h>

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

Span &Span::operator=(const Span& other)
{
	if (this == &other)
		return (*this);
	this->_maxSize = other._maxSize;
	this->_store = other._store;
	this->_count = other._count;
	return (*this);
}

Span::~Span()
{}

//		GETTERS		//


unsigned int Span::getCount() const { return _count; }

unsigned int Span::getValueAt(unsigned int i) const
{
	if (i >= this->_count)
		throw NoNumber();
	return (this->_store[i]);
}

const char *Span::Capacity::what() const throw() {return ("Error: Max capacity reached");}
const char *Span::NoNumber::what() const throw() {return ("Error: No number stored");}
const char *Span::ErrorRange::what() const throw() {return ("Error: Wrong range when trying to add multiple numbers");}
const char *Span::NoSpaceLeftInInventory::what() const throw() {return ("Error: Not enough space in vector left");}

void			Span::addNumber(const int N)
{
	if (this->_count >= this->_maxSize)
		throw Capacity();
	this->_store.push_back(N);
	this->_count++;
}

unsigned int	Span::shortestSpan()
{
	if (this->_count <= 0)
		throw NoNumber();
	
	if (this->_count == 1)
		return (this->_store[0]);

	int		diff = 0;
	int		min_diff = std::numeric_limits<int>::max();

	sort(this->_store.begin(), this->_store.end());
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
	
	if (this->_count == 1)
		return (this->_store[0]);
	
	sort(this->_store.begin(), this->_store.end());
	return (this->_store.back() - this->_store.front());
}

void	Span::addMultipleNumbers(unsigned int min_range, unsigned int max_range)
{
	if (min_range > max_range)
		throw ErrorRange();

	unsigned int	add = max_range - min_range + 1;

	if (add + this->_count > this->_maxSize)
		throw NoSpaceLeftInInventory();

	std::vector<unsigned int>	range;
	while (min_range <= max_range)
	{
		range.push_back(min_range);
		min_range++;
	}
	this->_store.insert(this->_store.end(), range.begin(), range.end());
	this->_count += add;
}

std::ostream& operator<<(std::ostream& o, const Span& rhs)
{
	unsigned int count = rhs.getCount();

	for (unsigned int i = 0; i < count; i++)
	{
		std::cout << rhs.getValueAt(i);
		if (i + 1 != count)
			std::cout << ", ";
	}
	return o;
}
