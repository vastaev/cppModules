#ifndef _CONTACT_HPP_
#define _CONTACT_HPP_
#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
		private:
				int			index_;
				std::string	firstName_;
				std::string	lastName_;
				std::string	nickName_;
				std::string	phoneNumber_;
				std::string	secret_;

		public:
				void	add(int index);
				void	displayContact(void);
};

#endif