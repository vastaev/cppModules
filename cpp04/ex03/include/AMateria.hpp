#ifndef _AMATERIA_HPP_
#define _AMATERIA_HPP_

#include "Libs.hpp"
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type_;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif