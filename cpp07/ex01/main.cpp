#include "iter.hpp"
#include <string>

void	printTop(std::string const & msg);

int main(void)
{
	int arr[] = {1, 5, 9, 22, 20, 41};
	printTop("Simple array of ints");
	printArray(arr, 6);
	iter(arr, 6, plusOne);
	printTop("Array after iter with plusOne func");
	printArray(arr, 6);
	std::cout << std::endl;
	float farr[] = {2.1, 4.1, 4.2};
	printTop("Simple array of floats");
	printArray(farr, 3);
	iter(farr, 3, plusOne);
	printTop("Array after iter with plusOne func");
	printArray(farr, 3);
}

void	printTop(std::string const & msg)
{
	std::cout << "---------------" << std::endl;
	std::cout << "--" << msg << std::endl;
}