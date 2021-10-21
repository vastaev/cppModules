#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->currentContactsNumber = 0;
}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::add(void)
{
	std::cout << "Adding new contact:" << std::endl;
	this->contacts[this->currentContactsNumber].add(this->currentContactsNumber);
}

void	PhoneBook::menu(void)
{
	std::string	line;

	std::cout << "_____________________________________" << std::endl;
	std::cout << "~Welcome to crappy awesome phonebook~" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line == "EXIT")
			break;
		else if (line == "ADD")
			add();
	}
	return ;
}