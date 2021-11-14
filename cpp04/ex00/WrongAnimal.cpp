#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongBasic")
{
	std::cout << GREEN << "WrongAnimal constructor (no args)" << DEFAULT << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): type(name)
{
	std::cout << GREEN << "WrongAnimal constructor (1 arg)" << DEFAULT << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << GREEN << "WrongAnimal destructor" << DEFAULT << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other): type(other.type)
{
	std::cout << GREEN << "Copy constructor" << DEFAULT << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &other)
{
	std::cout << GREEN << "Operator =" << DEFAULT << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << GREEN << "WrongAnimal sound" << DEFAULT << std::endl;
}

std::string const &WrongAnimal::getType() const
{
	return (type);
}
