#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <cstdlib>

# define	MAXIMUM_ANI 10

int main()
{
	std::srand(time(0));
	const Animal *ani[MAXIMUM_ANI];

//	Animal test;

	int	i = 0;
	while(i < MAXIMUM_ANI)
	{
		if (i < MAXIMUM_ANI / 2)
			ani[i] = new Dog();
		else
			ani[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < MAXIMUM_ANI)
	{
		std::cout << "Animal at " << i << " is " << ani[i]->getType() << std::endl;
		ani[i]->makeSound();
		i++;
	}
	i = 0;
	while (i < MAXIMUM_ANI)
	{
		delete(ani[i]);
		i++;
	}
	
	Dog		TestDeepCopy;
	std::cout << "\n" << "tmp = testdeep" << std::endl;
	Dog	tmp = TestDeepCopy;
	std::cout << "\n\n\n";
	return (0);
		
}
