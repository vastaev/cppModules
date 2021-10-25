#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name_ = "unknown";
}

Zombie::Zombie( std::string name)
{
	this->name_ = name;
}

Zombie::~Zombie()
{
	std::cout << this->name_ << " died again?" << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->name_ = name;
}

void	Zombie::announce( void )
{
	std::cout << this->name_ << " BraiiiiiiinnnzzzZ..." << std::endl;
}
