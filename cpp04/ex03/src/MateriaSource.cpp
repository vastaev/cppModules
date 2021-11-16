#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): currentNumber_(0) {}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < currentNumber_; i++)
		delete storage_[i];
}

MateriaSource::MateriaSource(MateriaSource const &other): currentNumber_(other.currentNumber_)
{
	for (int i = 0; i < 4; i++)
		storage_[i] = other.storage_[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	if (this != &other)
	{
		currentNumber_ = other.currentNumber_;
		for (int i = 0; i < 4; i++)
			storage_[i] = other.storage_[i];
	}
	return (*this);
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
