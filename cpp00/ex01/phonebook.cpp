#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->currentContactsNumber_ = 0;
}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::add(void)
{
	std::cout << "Adding new contact:" << std::endl;
	this->contacts[this->currentContactsNumber_].add(this->currentContactsNumber_);
	this->currentContactsNumber_++;
}

void	PhoneBook::display(void)
{
	this->contacts[this->currentContactsNumber_].displayContact();
}

void	PhoneBook::menu(void)
{
	std::string	line;

	std::cout << "-------------------------------------" << std::endl;
	std::cout << "~Welcome to crappy awesome phonebook~" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "You can: ADD, SEARCH or EXIT" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line == "EXIT")
			break;
		else if (line == "ADD")
			add();
		else if (line == "DISPLAY")
			display();
		else
			std::cout << "Command not found ヽ(ー_ー)ノ" << std::endl;
	}
	return ;
}