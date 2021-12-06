#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <list>
#include <iostream>

#define YELLOW		"\033[33m"
#define DEFAULT		"\033[0m"

template<typename T>
typename T::iterator	easyfind(T contaier, int target)
{
	typename T::iterator end = contaier.end();
	typename T::iterator itr = std::find(contaier.begin(), end, target);
	if (itr == end)
		std::cout << "Element not found" << std::endl;
	return (itr);
}

#endif