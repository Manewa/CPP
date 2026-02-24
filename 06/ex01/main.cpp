#include "Serialization.hpp"

int main ()
{
	Data		data;
	uintptr_t	serialized;
	int			num = 42;
	Data		*deserialized;

	data.ptr = (void *)&num;
std::cout << GREEN << "Value before serialization : " << NEUTRAL << std::endl << data.ptr << std::endl;
	serialized = Serialization::serialize(&data);
	std::cout << GREEN << "Value after serialization : " << NEUTRAL << std::endl;
	std::cout << data.ptr << std::endl;
	std::cout << GREEN << "Value serialized : " << NEUTRAL << std::endl;
	std::cout << serialized << std::endl;
	std::cout << GREEN << "Value deserialized : " << NEUTRAL << std::endl;
	deserialized = Serialization::deserialize(serialized);
	std::cout << deserialized->ptr << std::endl;
	return (1);
}
