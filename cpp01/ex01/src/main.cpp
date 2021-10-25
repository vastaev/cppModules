#include "Zombie.hpp"

int	main(void)
{
	int 	N;
	Zombie	*anasrat;

	N = 3;
	anasrat = zombieHorde(N, "Alex");
	for (int i = 0; i < N; i++)
		anasrat->announce();
	delete [] anasrat;

	return (0);
}
