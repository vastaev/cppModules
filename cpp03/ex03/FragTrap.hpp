#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	public:
			FragTrap();
			FragTrap(std::string name);
			~FragTrap();
			FragTrap(FragTrap const &other);

			FragTrap& operator=(FragTrap const &other);

			void highFivesGuys(void);
};

#endif