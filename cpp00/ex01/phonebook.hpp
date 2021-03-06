#pragma once
#ifndef _PHONEBOOK_HPP_
#define _PHONEBOOK_HPP_
#include "contact.hpp"
#include <string>
#include <iomanip>
#include <iostream>
#define CONTACTSNUM 8

class PhoneBook
{
	private:
			int		contactsCounter_;
			int		currentContactsNumber_;
			Contact	contacts_[CONTACTSNUM];

	public:
			PhoneBook(void);
			~PhoneBook(void);

			void	menu(void);
			void	add(void);
			void	display(void);
			int		indexValiddation(std::string str);
};

#endif