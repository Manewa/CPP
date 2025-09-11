#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstdlib>

class Animal {

public:

			Animal();
			Animal(const Animal& other);
			Animal& operator=(const Animal& other);
virtual		~Animal();
			std::string getType() const;
virtual		void	makeSound() const = 0;


private:


protected:

			std::string _type;
};

#endif

