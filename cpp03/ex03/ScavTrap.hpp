#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(std::string name);
			~ScavTrap();
			ScavTrap(ScavTrap const &other);

			ScavTrap& operator=(ScavTrap const &other);

			void	attack(std::string const &target);
			void	guardGate();
};

#endif