#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): name_(name), hWeapon_(NULL){}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon)
{
	this->hWeapon_ = &weapon;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->name_ << " attacks with his ";
	if (this->hWeapon_ == NULL)
		std::cout << "what? bare hands?";
	else
		std::cout << this->hWeapon_->getType();
	std::cout << std::endl;
}
