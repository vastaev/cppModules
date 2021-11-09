#include "FragTrap.hpp"

int main(void)
{
	std::cout << "---------------" << std::endl;
	std::cout << "--Constructor" << std::endl;
	FragTrap n1("Van");
	ClapTrap n2("Clap-clap");
	std::cout << "---------------" << std::endl;
	std::cout << "--Attack function" << std::endl;
	n1.attack("wall");
	n2.attack("air");
	std::cout << "---------------" << std::endl;
	std::cout << "--Take damage function" << std::endl;
	n1.takeDamage(2);
	std::cout << "---------------" << std::endl;
	std::cout  << "--High five function" << std::endl;
	n1.highFivesGuys();
	std::cout << "---------------" << std::endl;
	std::cout << "--Repair function" << std::endl;
	n1.beRepaired(1);
	std::cout << "---------------" << std::endl;
	std::cout << "--Destructor" << std::endl;
	return (0);
}