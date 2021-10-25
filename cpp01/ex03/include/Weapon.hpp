#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_ 

#include <string>

class Weapon
{
	public:
			Weapon(std::string const &type);
			~Weapon();

			const std::string &		getType(void);
			void					setType(std::string const &type);
	private:
			std::string type_;
};

#endif //_WEAPON_HPP_