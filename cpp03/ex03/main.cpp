#include "DiamondTrap.hpp"

int main(void)
{
	{
	std::cout << "---------------" << std::endl;
	std::cout << "--Constructor" << std::endl;
	DiamondTrap n1("Richie");
	std::cout << "---------------" << std::endl;
	n1.printStat();
	std::cout << "---------------" << std::endl;
	std::cout << "--Attack function" << std::endl;
	n1.attack("wall");
	std::cout << "---------------" << std::endl;
	std::cout << "--Take damage function" << std::endl;
	n1.takeDamage(2);
	std::cout << "---------------" << std::endl;
	std::cout << "--Repair function" << std::endl;
	n1.beRepaired(1);
	std::cout << "---------------" << std::endl;
	std::cout  << "--High five function" << std::endl;
	n1.highFivesGuys();
	std::cout << "---------------" << std::endl;
	std::cout  << "--Guard Gate function" << std::endl;
	n1.guardGate();
	std::cout << "---------------" << std::endl;
	std::cout  << "--whoAmI function" << std::endl;
	n1.whoAmI();
	std::cout << "---------------" << std::endl;
	std::cout << "--Destructor" << std::endl;
	}
	return (0);
}