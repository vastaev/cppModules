#ifndef _HUMAN_A_HPP_
#define _HUMAN_A_HPP_

#include "Weapon.hpp"
#include <string>

class HumanA
{
	public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA();

			void	attack(void);
	private:
			Weapon		&hWeapon_;
			std::string	name_;
};

#endif //_HUMAN_A_HPP_