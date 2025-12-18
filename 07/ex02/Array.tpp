

template<typename T>
Array<T>::Array() : _n(0) {this->_ptr = new T[0];}

template<typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
	this->_ptr = new T[n];
	
	for (unsigned int i = 0; i < n; i++)
		this->_ptr[i] = T(); 
}

template<typename T>
Array<T>::Array(const Array& other)
{
	unsigned int	otherSize = other.size();

	this->_n = otherSize;
	this->_ptr = new T[otherSize];
	for (unsigned int i = 0; i < otherSize; i++)
		this->_ptr[i] = other[i];
}


template<typename T>
Array<T> &Array<T>::operator=(const Array& other)
{
	unsigned int	otherSize = other.size();

	if (this = &other)
		return (*this);
	
	delete (this->_ptr);
	this->_n = otherSize;
	this->_ptr = new T[otherSize];
	for (unsigned int i = 0; i < otherSize; i++)
		this->_ptr[i] = other[i];
	return (*this);
}

template<typename T>
Array<T>::~Array() {	delete (this->_ptr); }

template<typename T>
T		&Array<T>::operator[](unsigned int n)
{
	if (n >= this->_n)
		throw OutOfBounds();
	return (this->_ptr[n]);
}

template<typename T>
const T	&Array<T>::operator[](unsigned int n) const
{
	if (n >= this->_n)
		throw OutOfBounds();
	return (this->_ptr[n]);
}

template<typename T>
unsigned int	Array<T>::size(void) const {return (this->_n);}

template<typename T>
const char *Array<T>::OutOfBounds::what() const throw()
{ return ("Error: index is out of bounds\n");}

template<typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &rhs)
{
	unsigned int	rhsSize = rhs.size();
	
	for (unsigned int i = 0; i < rhsSize; i++)
		o << rhs[i] << " ";
	return (o);
}
