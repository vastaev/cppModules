#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename Type>
void iter(Type *array, int length, void (*f)(Type &a))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template<typename Type>
void	plusOne(Type &a)
{
	a++;
}

template<typename Type>
void	printArray(Type *array, int length)
{
	int i = 0;
	for (; i < length - 1; i++)
		std::cout << array[i] << ", ";
	std::cout << array[i] << std::endl;
}

#endif