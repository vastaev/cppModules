#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include "Libs.hpp"

class Animal
{
	public:
		Animal();
		Animal(std::string name);
		virtual ~Animal();
		Animal(Animal const &other);

		Animal &operator=(Animal const &other);

		virtual void		makeSound() const;
		std::string const	&getType() const;
	protected:
		std::string type;
};

#endif