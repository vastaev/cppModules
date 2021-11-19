#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void	print_green(std::string msg);
void	print_testName(std::string testName);

void	test(std::string name, int gToSign, int gToExecute, std::string testName)
{
	print_testName(testName);
	try
	{
		print_green("Form creating");
		Form form = Form(name, gToSign, gToExecute);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "Something bad happened" << DEFAULT << std::endl;
	}
	std::cout << std::endl;
}

void	test_beSigned(std::string burName, int burGrade, std::string testName)
{
	print_testName(testName);
	try
	{
		Bureaucrat n1 = Bureaucrat(burName, burGrade);
		Form f1 = Form("Gym buliding", 42, 21);
		print_green("Calling beSigned function");
		f1.beSigned(n1);	
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "Something bad happened" << DEFAULT << std::endl;
	}
	std::cout << std::endl;
}

void	test_signForm(std::string burName, int burGrade, std::string testName)
{
	print_testName(testName);
	Bureaucrat n1 = Bureaucrat(burName, burGrade);
	Form f1 = Form("Gym buliding", 42, 21);
	try
	{
		print_green("Calling signForm function");
		n1.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "Something bad happened" << DEFAULT << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	test("№1", 42, 21, "Valid form creating test");
	//form grade to sign borders test
	test("№2", 151, 21, "Form too low grade to sign test");
	test("№3", 0, 21, "Form too high grade to sign test");
	//form grade to execute borders test
	test("№4", 42, 151, "Form too low grade to execute test");
	test("№5", 42, 0, "Form too high grade to execute test");

	test_beSigned("№1", 42, "Enough grade test");
	test_beSigned("№2", 43, "Too low grade to sign test");
	
	test_signForm("№1", 42, "Enough grade test");
	test_signForm("№2", 43, "Too low grade to sign test");
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