#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main()
{
	std::string test;
	std::cout << "---------------" << std::endl;
	std::cout << "--Main test" << std::endl;
	{
		std::cout << "---------------" << std::endl;
		std::cout << "--Constructor" << std::endl;
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << "---------------" << std::endl;
		std::cout << "--GetType" << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << "--Destructor" << std::endl;
		delete dog;
		delete cat;
	}
	std::cout << "---------------" << std::endl;
	std::cout << "--Test leaks" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Enter to continue" << std::endl;
	std::getline(std::cin, test);

	std::cout << "---------------" << std::endl;
	std::cout << "--Array test" << std::endl;
	{
		std::cout << "---------------" << std::endl;
		std::cout << "--Constructor" << std::endl;
		const Animal *ar[10];
		for (int i = 0; i < 10 ; i++)
		{
			std::cout << i << ")" << std::endl;
			if ((rand() % 2) == 0)
				ar[i] = new Cat();
			else
				ar[i] = new Dog();
			std::cout << ar[i]->getType() << std::endl;;
			ar[i]->makeSound();
		}
		std::cout << "---------------" << std::endl;
		std::cout << "--Destructor" << std::endl;
		for (int i = 0; i < 10 ; i++)
		{
			std::cout << i << ")" << std::endl;
			delete ar[i];
		}
	}
	std::cout << "---------------" << std::endl;
	std::cout << "--Test leaks" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Enter to continue" << std::endl;
	std::getline(std::cin, test);

	std::cout << "---------------" << std::endl;
	std::cout << "--Assignation test" << std::endl;
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

	std::cout << "---------------" << std::endl;
	std::cout << "--Copy constructor test" << std::endl;
	{
		std::cout << "---------------" << std::endl;
		std::cout << "--Constructor" << std::endl;
		Cat* cat = new Cat();
		std::cout << "---------------" << std::endl;
		std::cout << "--Cat copy" << std::endl;
		Cat copyCat(*cat);
		std::cout << "---------------" << std::endl;
		std::cout << "--Destructor" << std::endl;
		delete cat;
	}
	std::cout << "---------------" << std::endl;
	std::cout << "--Test leaks" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Enter to finish test" << std::endl;
	std::getline(std::cin, test);
	return (0);
}