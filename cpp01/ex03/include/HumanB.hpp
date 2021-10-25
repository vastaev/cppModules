#ifndef _HUMAN_B_HPP_
#define _HUMAN_B_HPP_

#include "Weapon.hpp"
#include <string>

class HumanB
{
	public:
			HumanB(std::string name);
			~HumanB();

			void	attack(void);
			void 	setWeapon(Weapon &weapon);
	private:
			Weapon		*hWeapon_;
			std::string	name_;
};

#endif //_HUMAN_B_HPP_