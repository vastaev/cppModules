#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	print_green(std::string msg);
void	print_testName(std::string testName);

void	test(int burGrade, std::string testName)
{
	static int num;
	print_testName(testName);
	try
	{
		num++;
		Bureaucrat b1 = Bureaucrat("№" + std::to_string(num), burGrade);
		RobotomyRequestForm n1 = RobotomyRequestForm("Van");
		print_green("Form Signing");
		n1.beSigned(b1);
		print_green("Form executing");
		n1.execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "Something bad happened" << DEFAULT << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	test(15, "Valid form creation");
	test(73, "Bur can't sign test");
	test(72, "Bur can't execute test");
}

void	print_testName(std::string testName)
{
	std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	std::cout << YELLOW << "  " << testName << DEFAULT << std::endl;
	std::cout << "~~~~~~~~~~~~~~~"<< std::endl;
}

void	print_green(std::string msg)
{
 	std::cout << "---------------" << std::endl;
	std::cout << GREEN << msg << DEFAULT << std::endl;
	std::cout << "---------------" << std::endl;
}