#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Constructor (0 parameters)" << std::endl;
	health_ = 100;
	energy_ = 50;
	damage_ = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor (1 parameter) " << name << " ScavTrap" << std::endl;
	health_ = 100;
	energy_ = 50;
	damage_ = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other.name_)
{
	std::cout << "Making ScavTrap copy" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
	if (this != &other)
	{
		std::cout << "ScavTrap becoming equal to " << other.name_ << std::endl;
		name_ = other.name_;
		health_ = other.health_;
		energy_ = other.energy_;
		damage_ = other.damage_;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap " << name_ << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << name_ << " attacking "
	<< target << " and causing a lot of damage (" << damage_ << ")" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name_ << " have entered Gate keeper mode." << std::endl;
}
