#ifndef _DIAMONDTRAP_HPP_
#define _DIAMONDTRAP_HPP_

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap
{
	public:
			DiamondTrap();
			DiamondTrap(std::string name);
			~DiamondTrap();
			DiamondTrap(DiamondTrap const &other);
			
			DiamondTrap& operator=(DiamondTrap const &other);

			using	ScavTrap::attack;
			void	whoAmI();
	private:
			std::string name_;
};

#endif
