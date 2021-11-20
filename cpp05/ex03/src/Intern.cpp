#include "Intern.hpp"

static Form * createRobotomyForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

static Form * createPresidentialForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

static Form * createShrubberyForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const & other) 
{
	*this = other;
}

Intern & Intern::operator=(Intern const & other) 
{
	if (this != &other)
		return (*this);
	return (*this);
}

Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
	std::string forms[] = {"RobotomyRequest", "ShrubberyCreate", "PresidentialPardon"};
	Form * (*f[])(std::string const & target) = {
		&createRobotomyForm, &createShrubberyForm, &createPresidentialForm};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == formName)
		{
			std::cout << "Intern creates \"" << formName << "\" form with target " << target << std::endl;
			return (f[i])(target);
		}
	}
	std::cout << "Form \"" << formName << "\" doesn't exist" << std::endl;
	return (0);
}
