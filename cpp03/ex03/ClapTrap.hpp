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
			ClapTrap(ClapTrap const &other);
			ClapTrap& operator=(ClapTrap const &other);

			void attack(std::string const & target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			void printStat();
	protected:
			std::string	name_;
			int			health_;
			int			energy_;
			int			damage_;
};

#endif //_CLAPTRAP_HPP_