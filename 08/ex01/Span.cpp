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
