#ifndef _WRONG_ANIMAL_HPP_
#define _WRONG_ANIMAL_HPP_

#include "Libs.hpp"

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &other);

		WrongAnimal &operator=(WrongAnimal const &other);

		void				makeSound() const;
		std::string const	&getType() const;
	protected:
		std::string type;
};

#endif