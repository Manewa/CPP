#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete (j);
	delete (i);
	delete (meta);

	std::cout << std::endl << std::endl;
	std::cout << "------ Wrong animals -------" << std::endl;
	std::cout << std::endl << std::endl;
	
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongj = new WrongDog();
	const WrongAnimal* wrongi = new WrongCat();

	std::cout << wrongj->getType() << " " << std::endl;
	std::cout << wrongi->getType() << " " << std::endl;
	wrongi->makeSound(); //will output the cat sound!
	wrongj->makeSound();
	wrongmeta->makeSound();
	delete (wrongj);
	delete (wrongi);
	delete (wrongmeta);
}
