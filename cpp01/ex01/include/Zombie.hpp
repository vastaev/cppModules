#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <string>
#include <iostream>

class Zombie
{
	public:
			Zombie( void );
			Zombie( std::string name );
			~Zombie( void );

			void	announce( void );
			void	setName( std::string name );
	private:
			std::string name_;
};

Zombie* zombieHorde( int N, std::string name );

#endif //_ZOMBIE_HPP_