#include "easyfind.hpp"

void	printTop(std::string const & msg);
template<typename T>
void print_arr(T arr)
{
	for (typename T::iterator i = arr.begin(); i != arr.end(); ++i)
		std::cout << *i << " ";
	std::cout << std::endl;
}

template<typename T>
void fill_arr(T &arr, int size)
{
	for (int i = 0; i < size; ++i)
		arr.push_back(i + 1);
}

int main()
{
	std::vector<int> arr;
	fill_arr(arr, 5);
	printTop("Creating vector from 1 to 5");
	print_arr(arr);
	printTop("Using easyfind with target 3");
	std::cout << *easyfind(arr, 3) << std::endl;
	printTop("Using easyfind with target 42");
	easyfind(arr, 42);
	std::cout << std::endl;

	std::list<int> lst;
	fill_arr(lst, 5);
	printTop("Creating list from 1 to 5");
	print_arr(lst);
	printTop("Using easyfind with target 2");
	std::cout << *easyfind(lst, 2) << std::endl;
	printTop("Using easyfind with target 42");
	easyfind(lst, 42);
	std::cout << std::endl;
}

void	printTop(std::string const & msg)
{
	std::cout << "---------------" << std::endl;
	std::cout << "-- " YELLOW  << msg << DEFAULT << std::endl;
}
