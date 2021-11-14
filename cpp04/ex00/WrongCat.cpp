#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << BLUE << "WrongCat constructor" << DEFAULT << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << BLUE << "WrongCat destructor" << DEFAULT << std::endl;
}

WrongCat::WrongCat(WrongCat const &other): WrongAnimal(other)
{
	std::cout << BLUE << "Copy constructor" << DEFAULT << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &other)
{
	std::cout << BLUE << "Operator =" << DEFAULT << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << BLUE << "WrongCat sound" << DEFAULT << std::endl;
}
