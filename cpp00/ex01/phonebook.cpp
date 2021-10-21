#include "phonebook.hpp"

void	PhoneBook::add(void)
{
	
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