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
			int		currentContactsNumber;
			Contact	contacts[8];

	public:
			PhoneBook(void);
			~PhoneBook(void);

			void	menu(void);
			void	add(void);

};

#endif