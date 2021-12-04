#include "iter.hpp"
#include <string>

void	printTop(std::string const & msg);

int main(void)
{
	int arr[] = {22, 20, 41};
	printTop("Simple array of ints");
	iter(arr, 3, printElem);
	float farr[] = {2.1, 4.1, 4.2};
	printTop("Simple array of floats");
	iter(farr, 3, printElem);
}

void	printTop(std::string const & msg)
{
	std::cout << "---------------" << std::endl;
	std::cout << "--" << msg << std::endl;
}