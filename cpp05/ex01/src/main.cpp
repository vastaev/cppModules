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
		Bureaucrat rat = Bureaucrat(name, grade);
		if (grade != 150)
		{
			std::cout << rat << std::endl;
			print_green("Incrementing grade");
			rat.incrementGrade();
		}
		if (grade != 1)
		{
			std::cout << rat << std::endl;
			print_green("Decrementing grade");
			rat.decrementGrade();
		}
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
	test("№2", 151, "Too Low Grade test");
	test("№3", 0, "Too High Grade test");
	test("№4", 1, "Increment throw test");
	test("№5", 150, "Decrement throw test");
}