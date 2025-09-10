#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

# define	MAXIMUM_ANI 10

int main()
{
	const Animal *ani[MAXIMUM_ANI];

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
}
