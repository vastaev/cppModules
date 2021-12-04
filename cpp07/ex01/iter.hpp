#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename Type>
void iter(Type *array, int length, void (*f)(Type const &a))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template<typename Type>
void	printElem(Type const &a)
{
	std::cout << a << std::endl;
}

#endif