#include "span.hpp"

int main(void)
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception thrown" << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
}