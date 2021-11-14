#ifndef _WRONG_CAT_HPP_
#define _WRONG_CAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &other);

		WrongCat& operator=(WrongCat const &other);

		void	makeSound() const;
};

#endif