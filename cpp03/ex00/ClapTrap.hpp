#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

#include <iostream>
#include <string>

class ClapTrap
{
	public:
			ClapTrap();
			ClapTrap(std::string name);
			~ClapTrap();
			ClapTrap(const ClapTrap &other);
			ClapTrap operator=(const ClapTrap &other);
			void attack(std::string const & target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
	private:
			std::string	name_;
			int			health_;
			int			energy_;
			int			damage_;
};

#endif //_CLAPTRAP_HPP_