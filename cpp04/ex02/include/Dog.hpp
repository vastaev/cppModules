#ifndef _DOG_HPP_
#define _DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog const &other);

		Dog& operator=(Dog const &other);

		void	makeSound() const;

		Brain	*dogBrain;
};

#endif