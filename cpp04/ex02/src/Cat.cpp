#include "../include/Cat.hpp"

Cat::Cat(): Animal("Cat"), catBrain(new Brain())
{
	std::cout << BLUE << "Cat constructor" << DEFAULT << std::endl;
}

Cat::~Cat()
{
	std::cout << BLUE << "Cat destructor" << DEFAULT << std::endl;
	delete catBrain;
}

Cat::Cat(Cat const &other): Animal(other), catBrain(new Brain(*(other.catBrain)))
{
	std::cout << BLUE << "Cat Copy constructor" << DEFAULT << std::endl;
}

Cat& Cat::operator=(Cat const &other)
{
	std::cout << BLUE << "Cat Operator =" << DEFAULT << std::endl;
	if (this != &other)
	{
		delete catBrain;
		type = other.type;
		catBrain = new Brain(*(other.catBrain));
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << BLUE << "Cat sound" << DEFAULT << std::endl;
}
