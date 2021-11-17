#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	std::string test;
	std::cout << "---------------" << std::endl;
	std::cout << GREEN << "--Main test" << DEFAULT << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "---------------" << std::endl << std::endl;

	std::cout << "---------------" << std::endl;
	std::cout << GREEN << "--No materia test" << DEFAULT << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Character trying to use index 0 materia" << std::endl;
	me->use(0, *bob);
	std::cout << "--No output = nothing happened" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Creating new materia and equiping" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << "---------------" << std::endl;
	std::cout << "--Output:" << std::endl;
	me->use(0, *bob);
	std::cout << "---------------" << std::endl << std::endl;

	std::cout << "---------------" << std::endl;
	std::cout << GREEN "--Unequip test" << DEFAULT << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Creating materia, equiping and unequiping" << std::endl;
	std::cout << "---------------" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	std::cout << "--Trying to use" << std::endl;
	std::cout << "---------------" << std::endl;
	me->use(0, *bob);
	std::cout << "--No output as intended" << std::endl;
	std::cout << "---------------" << std::endl << std::endl;

	std::cout << "---------------" << std::endl;
	std::cout << GREEN << "--Deep copy of Character test with [=]" << DEFAULT << std::endl;
	std::cout << "---------------" << std::endl;
	Character *orig = new Character("Billy");
	tmp = src->createMateria("ice");
	orig->equip(tmp);
	tmp = src->createMateria("cure");
	orig->equip(tmp);
	Character *copy = new Character("Van");
	*copy = *orig;
	std::cout << "Copy name: " << copy->getName() << "   " << std::endl
	<< "Original name: " << orig->getName() << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Copy char using materia" << std::endl;
	orig->getName();
	copy->use(0, *me);
	copy->use(1, *me);
	std::cout << "---------------" << std::endl;
	std::cout << "--Original char still able to use materia after copy" << std::endl;
	orig->use(0, *bob);
	orig->use(1, *bob);
	std::cout << "---------------" << std::endl;
	std::cout << "--Test leaks" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Enter to continue" << std::endl;
	std::getline(std::cin, test);

	std::cout << "---------------" << std::endl;
	std::cout << GREEN << "--Deep copy of Character test with copy constructor" << DEFAULT << std::endl;
	std::cout << "---------------" << std::endl;
	tmp = src->createMateria("ice");
	orig->equip(tmp);
	tmp = src->createMateria("cure");
	orig->equip(tmp);
	Character copy2 = *orig;
	std::cout << "Copy name: " << copy->getName() << "   " << std::endl
	<< "Original name: " << orig->getName() << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Copy char using materia" << std::endl;
	copy2.use(0, *me);
	copy2.use(1, *me);
	std::cout << "---------------" << std::endl;
	std::cout << "--Original char still able to use materia after copy" << std::endl;	
	orig->use(0, *bob);
	orig->use(1, *bob);
	std::cout << "---------------" << std::endl;
	std::cout << "--Test leaks" << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "--Enter to finish" << std::endl;
	std::getline(std::cin, test);
	delete copy;
	delete orig;
	delete bob;
	delete me;
	delete src;
	return 0;
	
}