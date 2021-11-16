#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type): type_(type) {}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
	return (type_);
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName();
}
