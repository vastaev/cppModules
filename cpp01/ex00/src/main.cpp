#include "Zombie.hpp"

int	main(void)
{
	//1
	Zombie zom_1("Oleg");
	zom_1.announce();
	//2
	randomChump("Molodec");
	//3
	Zombie *zom_2 = newZombie("Kaneki-ken");
	zom_2->announce();
	delete zom_2;
	return (0);
}