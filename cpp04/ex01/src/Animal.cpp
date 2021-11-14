#include "../include/Animal.hpp"

Animal::Animal(): type("Basic")
{
	std::cout << GREEN << "Animal constructor (no args)" << DEFAULT << std::endl;
}

Animal::Animal(std::string name): type(name)
{
	std::cout << GREEN << "Animal constructor (1 arg)" << DEFAULT << std::endl;
}

Animal::~Animal()
{
	std::cout << GREEN << "Animal destructor" << DEFAULT << std::endl;
}

Animal::Animal(Animal const &other): type(other.type)
{
	std::cout << GREEN << "Animal Copy constructor" << DEFAULT << std::endl;
}

Animal& Animal::operator=(Animal const &other)
{
	std::cout << GREEN << "Animal Operator =" << DEFAULT << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << GREEN << "Animal sound" << DEFAULT << std::endl;
}

std::string const &Animal::getType() const
{
	return (type);
}
