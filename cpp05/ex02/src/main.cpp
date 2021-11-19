#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
	// Bureaucrat b1 = Bureaucrat("Billy", 150);
	// ShrubberyCreationForm n1 = ShrubberyCreationForm("home");
	// n1.execute(b1);

	// Bureaucrat b2 = Bureaucrat("Van", 1);
	// ShrubberyCreationForm n1 = ShrubberyCreationForm("home");
	// n1.execute(b1);

	Bureaucrat b3 = Bureaucrat("3", 1);
	RobotomyRequestForm n3 = RobotomyRequestForm("Van");
	n3.execute(b3);
}
