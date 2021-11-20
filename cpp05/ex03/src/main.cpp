#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form *rrf;
	Form *n2;
	Form *n3;
	Form *n4;

	rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
	n2 = someRandomIntern.makeForm("ShrubberyCreate", "Van");
	n3 = someRandomIntern.makeForm("PresidentialPardon", "Billy");
	n4 = someRandomIntern.makeForm("Gym building", "Peter");
	delete rrf;
	delete n2;
	delete n3;
}
