#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia Source constr" << std::endl;
	currentNumber_ = 0;
}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < currentNumber_; i++)
		delete storage_[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (currentNumber_ == 4)
	{
		std::cout << "No space for new materia" << std::endl;
		delete materia;
	}
	else
	{
		std::cout << "Successfuly added new materia" << std::endl;
		storage_[currentNumber_] = materia;
		currentNumber_++;
	}
}

AMateria* createMateria(std::string const & type)
{
	
}
