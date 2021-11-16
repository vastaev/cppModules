#ifndef _CURE_HPP
#define _CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const &other);

		Cure &operator=(Cure const &other);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif