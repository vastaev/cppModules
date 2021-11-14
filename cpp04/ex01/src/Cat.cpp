#include "../include/Cat.hpp"

Cat::Cat(): Animal("Cat"), catBrain(new Brain())
{
	std::cout << YELLOW << "Cat constructor" << DEFAULT << std::endl;
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat destructor" << DEFAULT << std::endl;
	delete catBrain;
}

Cat::Cat(Cat const &other): Animal(other)
{
	std::cout << YELLOW << "Copy constructor" << DEFAULT << std::endl;
	*this = other;
}

Cat& Cat::operator=(Cat const &other)
{
	std::cout << YELLOW << "Operator =" << DEFAULT << std::endl;
	if (this != &other)
	{
		type = other.type;
		delete catBrain;
		catBrain = new Brain(*(other.catBrain));
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << YELLOW << "Cat sound" << DEFAULT << std::endl;
}
