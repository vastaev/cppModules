#include "Weapon.hpp"

Weapon::Weapon(std::string const &type)
{
	this->type_ = type;
}

Weapon::~Weapon(){}

const std::string &	Weapon::getType(void)
{
	return (this->type_);
}

void	Weapon::setType(std::string const &type)
{
	this->type_ = type;
}