#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name)
{
	this->name_ = name;
}

Zombie::~Zombie()
{
	std::cout << this->name_ << " died again?" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->name_ << " BraiiiiiiinnnzzzZ..." << std::endl;
}

