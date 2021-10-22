#pragma once
#ifndef _PHONEBOOK_HPP_
#define _PHONEBOOK_HPP_
#include "contact.hpp"
#include <string>
#include <iomanip>
#include <iostream>

class PhoneBook
{
	private:
			int		contacts_Counter_;
			int		currentContactsNumber_;
			Contact	contacts_[8];

	public:
			PhoneBook(void);
			~PhoneBook(void);

			void	menu(void);
			void	add(void);
			void	display(void);
			int		indexValiddation(std::string str);

};

#endif