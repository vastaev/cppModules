#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Constructor (0 parameters) of FragTrap" << std::endl;
	health_ = 100;
	energy_ = 100;
	damage_ = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor (1 parameter) " << name << " FragTrap" << std::endl;
	health_ = 100;
	energy_ = 100;
	damage_ = 30;
}

FragTrap::FragTrap(FragTrap const &other): ClapTrap(other.name_)
{
	std::cout << "Making FragTrap copy" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(FragTrap const &other)
{
	if (this != &other)
	{
		std::cout << "FragTrap becoming equal to " << other.name_ << std::endl;
		name_ = other.name_;
		health_ = other.health_;
		energy_ = other.energy_;
		damage_ = other.damage_;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap " << name_ << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name_ << " requesting high five!" << std::endl;
}
