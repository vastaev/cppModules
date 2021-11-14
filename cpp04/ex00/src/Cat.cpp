#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << BLUE << "Cat constructor" << DEFAULT << BLUE << std::endl;
}

Cat::~Cat()
{
	std::cout << BLUE << "Cat destructor" << DEFAULT << BLUE << std::endl;
}

Cat::Cat(Cat const &other): Animal(other)
{
	std::cout << BLUE << "Copy constructor" << DEFAULT << BLUE << std::endl;
}

Cat& Cat::operator=(Cat const &other)
{
	std::cout << BLUE << "Operator =" << DEFAULT << BLUE << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << BLUE << "Cat sound" << DEFAULT << std::endl;
}
