#include "Brain.hpp"
#include <cstdlib>

Brain::Brain()
{
	static const std::string ideaPool[] = {
		"eat", "sleep", "play", "run", "dig", "bark", "chase tail",
		"catch ball", "jump", "roll over", "bite stick", "sniff"
	};
	int poolSize = sizeof(ideaPool) / sizeof(ideaPool[0]);

	std::srand(time(0));
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = ideaPool[std::rand() % poolSize];
	}
	std::cout << "Constructor Brain called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Copy constructor Brain called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	std::cout << "Copy assignement constructor operator Brain called" << std::endl;
	return (*this);
}
Brain::~Brain() {std::cout << "Destructor Brain called" << std::endl;};
