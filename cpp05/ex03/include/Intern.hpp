#ifndef _INTERN_HPP_
#define _INTERN_HPP_

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const & other);

		Intern & operator=(Intern const & other);

		Form *makeForm(std::string const &formName, std::string const &target);
};

#endif