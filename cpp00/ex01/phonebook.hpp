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
			int		currentContactsNumber_;
			Contact	contacts[8];

	public:
			PhoneBook(void);
			~PhoneBook(void);

			void	menu(void);
			void	add(void);
			void	display(void);

};

#endif