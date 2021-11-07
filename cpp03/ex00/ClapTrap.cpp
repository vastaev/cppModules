#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name_("unknown"), health_(10), energy_(10), damage_(0) 
{
	std::cout << "Oh, unnamed ClapTrap was born" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name_(name), health_(10), energy_(10), damage_(0)
{
	std::cout << "Oh, hey brand-new " << name_ << " ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): name_(other.name_), health_(other.health_), energy_(other.energy_), damage_(other.damage_) {}

ClapTrap::~ClapTrap() 
{
	std::cout << "Oh no, ClapTrap " << name_ << " was destroyed :(" << std::endl;
}

ClapTrap ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name_ = other.name_;
		health_ = other.health_;
		energy_ = other.energy_;
		damage_ = other.damage_;
	}
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "Wooow, dangerous ClapTrap " << name_ << " attacking " 
	<< target << " and causing a lot of damage (" << damage_ << ")" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Ouch, ClapTrap " << name_ << " took " << amount 
	<< " damage, how he is still alive?" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "How sweet, ClapTrap " << name_ << " was repaired and got " 
	<< amount << " healthpoints" << std::endl;
}