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
			Contact	contacts[8];

	public:
			void	menu(void);
			void	add(void);

};

#endif