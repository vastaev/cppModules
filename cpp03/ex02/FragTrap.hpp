#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
			FragTrap();
			FragTrap(std::string name);
			~FragTrap();
			FragTrap(FragTrap const &other);

			FragTrap& operator=(FragTrap const &other);

			void	attack(std::string const &target);
			void	highFivesGuys(void);
};

#endif