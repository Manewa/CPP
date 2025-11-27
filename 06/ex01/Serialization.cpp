#include "Serialization.hpp"

Serialization::Serialization() {	std::cout << GREY << "Serialization constructor called" << NEUTRAL << std::endl; }

Serialization::Serialization(const Serialization& other) { *this = other; }

Serialization	Serialization::operator=(const Serialization& other) { return ((void)other, *this); }

Serialization::~Serialization() {}


uintptr_t	Serialization::serialize(Data *raw)
{
	uintptr_t	ser;

	ser = reinterpret_cast<uintptr_t>(raw);
	return (ser);
}

Data		*Serialization::deserialize(uintptr_t raw)
{
	Data	*deser;

	deser = reinterpret_cast<Data*>(raw);
	return (deser);
}
