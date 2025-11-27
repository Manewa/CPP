#include "Serialization.hpp"

int main ()
{
	Data		data;
	uintptr_t	serialized;
	int			num = 42;
	Data		*deserialized;

	data.ptr = (void *)&num;
	std::cout << data.ptr << std::endl;
	serialized = Serialization::serialize(&data);
	std::cout << data.ptr << std::endl;
	std::cout << serialized << std::endl;
	deserialized = Serialization::deserialize(serialized);
	std::cout << deserialized->ptr << std::endl;
	return (1);
}
