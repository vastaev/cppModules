#include "contact.hpp"

void Contact::add(int index)
{
	this->index_ = index;
	std::cout << "First name: ";
	std::getline(std::cin, this->firstName_);
	std::cout << "Last name: ";
	std::getline(std::cin, this->lastName_);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickName_);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->phoneNumber_);
	std::cout << "Deep dark secret: ";
	std::getline(std::cin, this->secret_);
	std::cout << "Done!" << std::endl;
	return ;
}

void	Contact::displayContact(void)
{
	std::cout << std::setw(10) << '[' << this->index_ << ']' << std::endl;
	std::cout << "First name: " << this->firstName_ << std::endl;
	std::cout << "Last name: " << this->lastName_ << std::endl;
	std::cout << "Nickname: " << this->nickName_ << std::endl;
	std::cout << "Phone number: " << this->phoneNumber_ << std::endl;
	std::cout << "Deep dark secret: " << this->secret_ << std::endl;
}
