#include "span.hpp"

void	printTop(std::string const & msg);

int main(void)
{
	printTop("Subject test");
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	printTop("100k elements test");
	std::srand(std::time(nullptr));
	std::vector<int> arr(100000);
	for (std::vector<int>::iterator itr = arr.begin(); itr != arr.end(); ++itr)
		*itr = rand();
	Span sp2(100000);
	sp2.addNumber(arr.begin(), arr.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	printTop("Exception too many elements");
	Span sp3(3);
	try
	{
			sp3.addNumber(5);
			sp3.addNumber(3);
			sp3.addNumber(17);
			sp3.addNumber(9);
			sp3.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception caught when adding number" << std::endl;
	}
	
	printTop("Exception not enough to execute longestSpan");
	Span sp4(1);
	try
	{
		sp4.longestSpan();
	}
	catch(const std::exception& e)
	{
			std::cout << "Exception caught when using longestSpan number" << std::endl;
	}

	printTop("Exception not enough to execute shortestSpan");
	try
	{
		sp4.shortestSpan();
	}
	catch(const std::exception& e)
	{
			std::cout << "Exception caught when using shortestSpan number" << std::endl;
	}
}

void	printTop(std::string const & msg)
{
	std::cout << "---------------" << std::endl;
	std::cout << "-- " YELLOW  << msg << DEFAULT << std::endl;
}