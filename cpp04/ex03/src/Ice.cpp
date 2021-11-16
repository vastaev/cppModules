#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(Ice const &other): AMateria(other.type_) {}

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