#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	public:
		Character(std::string name);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx) ;
		void use(int idx, ICharacter& target);
	private:
		std::string	name_;
		AMateria	*slots_[4];
		int			currentNumber_;
};

#endif