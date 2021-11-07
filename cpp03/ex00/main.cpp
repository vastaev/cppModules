#include "ClapTrap.hpp"

int main()
{
	ClapTrap n1("Dominator");
	ClapTrap n2 = n1;
	ClapTrap n3;
	n3 = n1;
	n1.attack("air");
	n1.takeDamage(2);
	n1.beRepaired(5);
}