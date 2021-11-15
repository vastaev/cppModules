#ifndef _CAT_HPP_
#define _CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(Cat const &other);

		Cat& operator=(Cat const &other);

		void	makeSound() const;

		Brain	*catBrain;
};

#endif