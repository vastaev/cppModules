#include <iostream>
#include "Array.hpp"
#define MAX_VAL 5

void	printTop(std::string const & msg);

template<typename Type>
void	printArray(Array<Type> array)
{
	if (array.size() == 0)
	{
		std::cout << "Empty array" << std::endl;
		return ;
	}
	int i = 0;
	for (; i < MAX_VAL - 1; i++)
		std::cout << array[i] << ", ";
	std::cout << array[i] << std::endl;
}

template<typename Type>
void	printArray(Type *array)
{
	int i = 0;
	for (; i < MAX_VAL - 1; i++)
		std::cout << array[i] << ", ";
	std::cout << array[i] << std::endl;
}

int main(int, char**)
{
	printTop("Creating empty array");
	Array<float> floats = Array<float>();
	printArray(floats);
	std::cout << "Size: " << floats.size() << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 100;
        numbers[i] = value;
        mirror[i] = value;
    }
	printTop("Array class set");
	printArray(numbers);
	std::cout << "Size: " << numbers.size() << std::endl;

	printTop("Mirror variable set");
	printArray(mirror);
	std::cout << "Size: " << numbers.size() << std::endl;
    //SCOPE
    {
		printTop("Copy constructor test");
        Array<int> tmp = numbers;
		printArray(tmp);
		std::cout << "Size: " << numbers.size() << std::endl;

		printTop("Copy constructor test#2");
        Array<int> test(tmp);
		printArray(test);
		std::cout << "Size: " << numbers.size() << std::endl;

		printTop("Assignation operator test");
		Array<int> test2;
		test2 = numbers;
		printArray(test2);
		std::cout << "Size: " << numbers.size() << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
		printTop("Trying to call -2 index");
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
		printTop("Trying to call MAX_VAL index");
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	printTop("Assigning new values for Array");
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand() % 100 + 200;
    }
	printArray(numbers);

	printTop("Making const Array class set");
	const Array<int> mis = numbers;
	printArray(mis);
	std::cout << "Accessing array[3] - " << mis[3] << std::endl;
	// mis[3] = 5;

    delete [] mirror;
    return 0;
}

void	printTop(std::string const & msg)
{
	std::cout << "---------------" << std::endl;
	std::cout << "-- " YELLOW  << msg << DEFAULT << std::endl;
}