#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat("N1", 500);
	}
	catch(std::exception e)
	{
		std::cerr << "Try another grade" << std::endl;
	}
	
}