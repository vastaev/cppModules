#include "../include/Dog.hpp"

Dog::Dog(): Animal("Dog"), dogBrain(new Brain())
{
	std::cout << YELLOW << "Dog constructor" << DEFAULT << std::endl;
}

Dog::~Dog()
{
	std::cout << YELLOW << "Dog destructor" << DEFAULT << std::endl;
	delete dogBrain;
}

Dog::Dog(Dog const &other): Animal(other), dogBrain(new Brain(*(other.dogBrain)))
{
	std::cout << YELLOW << "Dog Copy constructor" << DEFAULT << std::endl;
}

Dog& Dog::operator=(Dog const &other)
{
	std::cout << YELLOW << "Dog Operator =" << DEFAULT << std::endl;
	if (this != &other)
	{
		delete dogBrain;
		type = other.type;
		dogBrain = new Brain(*(other.dogBrain));
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << YELLOW << "Dog sound" << DEFAULT << std::endl;
}
