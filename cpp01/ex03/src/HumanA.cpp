#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): name_(name), hWeapon_(weapon){}

HumanA::~HumanA(){}

void	HumanA::attack(void)
{
	std::cout << this->name_ << " attacks with his " << this->hWeapon_.getType() << std::endl;
}
