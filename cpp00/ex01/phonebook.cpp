#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->currentContactsNumber_ = 0;
	this->contactsCounter_ = 0;
}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::add(void)
{
	std::cout << "Adding new contact:" << std::endl;
	this->contacts_[this->contactsCounter_].add(this->contactsCounter_ + 1);
	this->currentContactsNumber_++;
	if (this->currentContactsNumber_ > CONTACTSNUM)
		this->currentContactsNumber_ = CONTACTSNUM;
	this->contactsCounter_++;
	if (contactsCounter_ == CONTACTSNUM)
		this->contactsCounter_ = 0;
}

int	PhoneBook::indexValiddation(std::string str)
{
	int ind = 0;

	if (str.size() != 1)
		return (-1);
	ind = str[0] - 48;
	if (ind > 0 && ind < 9)
		return (ind);
	return (-1);
}

void	PhoneBook::display(void)
{
	std::string	line;
	int			ind;

	std::cout << "Search mode:" << std::endl;
	for (size_t i = 0; i < this->currentContactsNumber_; i++)
		this->contacts_[i].shortDisplayContact();
	if (this->currentContactsNumber_ == 0)
		std::cout << "Empty phonebook!" << std::endl;
	else
	{
		std::cout << "input index(empty line to exit search mode)" << std::endl;
		while (std::getline(std::cin, line))
		{
			if (line == "")
				break ;
			ind = indexValiddation(line);
			if (ind == -1)
			{
				std::cout << "invalid index(only 1 - 8 exists)" << std::endl;
				continue ;
			}
			contacts_[ind - 1].displayContact();
		}
	}
	std::cout << "Exited Search mode" << std::endl;
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
		else if (line == "SEARCH")
			display();
		else
			std::cout << "Command not found ヽ(ー_ー)ノ" << std::endl;
	}
	return ;
}