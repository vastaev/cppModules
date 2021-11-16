#ifndef _MATERIASOURCE_HPP_
#define _MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &other);

		MateriaSource &operator=(MateriaSource const &other);

		void 		learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const & type);
	private:
		AMateria	*storage_[4];
		int			currentNumber_;
};

#endif