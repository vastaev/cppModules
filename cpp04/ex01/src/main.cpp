#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main()
{
	std::string test;
	// {
	// 	std::cout << "---------------" << std::endl;
	// 	std::cout << "--Constructor" << std::endl;
	// 	const Animal* dog = new Dog();
	// 	const Animal* cat = new Cat();
	// 	std::cout << "---------------" << std::endl;
	// 	std::cout << "--GetType" << std::endl;
	// 	std::cout << dog->getType() << " " << std::endl;
	// 	std::cout << cat->getType() << " " << std::endl;
	// 	std::cout << "---------------" << std::endl;
	// 	std::cout << "--Destructor" << std::endl;
	// 	delete dog;
	// 	delete cat;
	// }
	// std::cout << "---------------" << std::endl;
	// std::cout << "--Test leaks" << std::endl;
	// std::cout << "---------------" << std::endl;
	// std::cout << "--Enter to continue" << std::endl;
	// std::getline(std::cin, test);
	{
		std::cout << "---------------" << std::endl;
		std::cout << "--Constructor" << std::endl;
		Dog* dog = new Dog();
		Dog* dogCopy = new Dog();
		std::cout << "---------------" << std::endl;
		std::cout << "--Dog assignation" << std::endl;
		*dog = *dogCopy;
		std::cout << "---------------" << std::endl;
		std::cout << "--Destructor" << std::endl;
		delete dog;
		delete dogCopy;
	}
	std::cout << "---------------" << std::endl;
	std::cout << "--Test leaks" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Enter to continue" << std::endl;
	std::getline(std::cin, test);
	return (0);
}