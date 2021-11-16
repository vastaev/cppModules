#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): currentNumber_(0) {}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < currentNumber_; i++)
		delete storage_[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (currentNumber_ == 4)
		delete materia;
	else
	{
		storage_[currentNumber_] = materia;
		currentNumber_++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < currentNumber_; i++)
	{
		if (type == storage_[i]->getType())
			return (storage_[i]->clone());
	}
	return (0);
}
