#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weap) : _name(name), _weap(weap) {};
HumanA::~HumanA(void) {};

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weap.getType() << std::endl;
	return ;
}
