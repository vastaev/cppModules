#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(Cure const &other): AMateria(other.type_) {}

AMateria *Cure::clone() const
{
	AMateria *clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals ";
	AMateria::use(target);
	std::cout << "'s wounds *" << std::endl;
}