#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(Ice const &other): AMateria(other.type_) {}

Ice &Ice::operator=(Ice const &other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at ";
	AMateria::use(target);
	std::cout << " *" << std::endl;
}