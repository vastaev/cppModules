#include "easyfind.hpp"
#include <random>

void	printTop(std::string const & msg);
template<typename T>
void print_arr(T arr)
{
	for (typename T::iterator i = arr.begin(); i < arr.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

int main()
{
	std::vector<int> arr(5);
	
	print_arr(arr);
}

void	printTop(std::string const & msg)
{
	std::cout << "---------------" << std::endl;
	std::cout << "-- " YELLOW  << msg << DEFAULT << std::endl;
}
