#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << YELLOW << "Dog constructor" << DEFAULT << std::endl;
}

Dog::~Dog()
{
	std::cout << YELLOW << "Dog destructor" << DEFAULT << std::endl;
}

Dog::Dog(Dog const &other): Animal(other)
{
	std::cout << YELLOW << "Copy constructor" << DEFAULT << std::endl;
}

Dog& Dog::operator=(Dog const &other)
{
	std::cout << YELLOW << "Operator =" << DEFAULT << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << YELLOW << "Dog sound" << DEFAULT << std::endl;
}
