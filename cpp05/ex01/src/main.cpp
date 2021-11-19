#include "Bureaucrat.hpp"
#include <iostream>
#include <iomanip>

void	print_green(std::string msg)
{
 	std::cout << "---------------" << std::endl;
	std::cout << GREEN << msg << DEFAULT << std::endl;
	std::cout << "---------------" << std::endl;
}

void	test(std::string name, int grade, std::string testName)
{
	std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	std::cout << YELLOW << "  " << testName << DEFAULT << std::endl;
	std::cout << "~~~~~~~~~~~~~~~"<< std::endl;
	try
	{
		print_green("Bureaucrat creating");
		Bureaucrat rat = Bureaucrat("Van", 50);
		Form form = Form(name, grade, 21);
		std::cout << rat << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Something bad happened" << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	test("№1", 50, "Normal test");
}