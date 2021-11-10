#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name_("unknown"), health_(10), energy_(10), damage_(0) 
{
	std::cout << "Constructor (0 parameters) of ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name_(name), health_(10), energy_(10), damage_(0)
{
	std::cout << "Constructor (1 parameter) " << name_ << " ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other): name_(other.name_), health_(other.health_), energy_(other.energy_), damage_(other.damage_) 
{
	std::cout << "Copy constructor " << other.name_ << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "Destructor of ClapTrap " << name_ << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{
	if (this != &other)
	{
		std::cout << "Some ClapTrap became equal to " << other.name_ << std::endl;
		name_ = other.name_;
		health_ = other.health_;
		energy_ = other.energy_;
		damage_ = other.damage_;
	}
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << name_ << " attacking "
	<< target << " and causing a lot of damage (" << damage_ << ")" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Ouch, " << name_ << " took " << amount 
	<< " damage, is he still alive?" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "How sweet, " << name_ << " was repaired and got some hp (" << 
	amount << ")" <<std::endl;
}

void ClapTrap::printStat()
{
	std::cout << "Name: " << name_ << std::endl
	<< "Health: " << health_ << std::endl
	<< "Energy: " << energy_ << std::endl
	<< "Damage: " << damage_ << std::endl;
}