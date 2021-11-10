#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Constructor (0 parameters) of DiamondTrap" << std::endl;
	ClapTrap::name_ = "unknown_clap_name";
	this->name_ = "unknown";
	health_ = 100;
	energy_ = 50;
	damage_ = 30;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	ClapTrap::name_ = name + "_clap_name";
	std::cout << "Constructor (1 parameter) " << name << " DiamondTrap" << std::endl;
	this->name_ = name;
	health_ = 100;
	energy_ = 50;
	damage_ = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other): ClapTrap(other.name_), ScavTrap(other.name_), FragTrap(other.name_)
{
	std::cout << "Making DiamondTrap copy" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &other)
{
	if (this != &other)
	{
		std::cout << "DiamondTrap becoming equal to " << other.name_ << std::endl;
		ClapTrap::name_ = other.ClapTrap::name_;
		name_ = other.name_;
		health_ = other.health_;
		energy_ = other.energy_;
		damage_ = other.damage_;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap " << name_ << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name->" << name_ << std::endl
	<< "ClapTrap name->" << ClapTrap::name_ << std::endl; 
}
