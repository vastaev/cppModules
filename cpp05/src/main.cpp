#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat("N1", 50);
	}
	catch(std::exception e)
	{
		std::cerr << e.what() << '\n';
	}
	
}