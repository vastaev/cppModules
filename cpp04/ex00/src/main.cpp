#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
	std::cout << "---------------" << std::endl;
	std::cout << "--Constructor" << std::endl;
    const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << "---------------" << std::endl;
	std::cout << "--GetType" << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--MakeSound" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "---------------" << std::endl;
	std::cout << "--Destructor" << std::endl;
	delete i;
	delete j;
	delete meta;
	}
	{
	std::cout << "---------------" << std::endl;
	std::cout << "--Wrong Tests" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Constructor" << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << "---------------" << std::endl;
	std::cout << "--GetType" << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--MakeSound" << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	std::cout << "---------------" << std::endl;
	std::cout << "--Destructor" << std::endl;
	delete i;
	delete meta;
	}
	return (0);
}