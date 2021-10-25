#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <string>

class Zombie
{
	public:
			void	announce( void );

			Zombie( std::string name );
			~Zombie( void );
	private:
			std::string name_;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif //_ZOMBIE_HPP_