#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <stdint.h>
#include "colors.hpp"

typedef struct data {
		void	*ptr;
}		Data;

class Serialization {

public:

			static uintptr_t	serialize(Data *raw);
			static Data		*deserialize(uintptr_t raw);

private:

			Serialization();
			Serialization(const Serialization& other);
			Serialization operator=(const Serialization& other);
			~Serialization();
		
};

#endif

