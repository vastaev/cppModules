#include "mutantstack.hpp"
#include "mutantstack.cpp"
#include <iostream>
#include <string>

template<typename T> void	print_collection(MutantStack<T> &collection);
void						printTop(std::string const & msg);

int main()
{
	MutantStack<int> mstack;
	printTop("Pushing 5 and 17 to MutantStack with stack push()");
	mstack.push(5);
	mstack.push(17);

	printTop("Calling stack top() method");
	std::cout << mstack.top() << std::endl;

	printTop("Calling stack empty() method");
	std::cout << mstack.empty() << std::endl;

	printTop("Calling stack pop() method and size() after");
	mstack.pop();
	std::cout << mstack.size() << std::endl;

	printTop("Pushing 2 nums to MutantStack with stack push() and calling size()");
	mstack.push(42);
	mstack.push(21);
	std::cout << mstack.size() << std::endl;

	printTop("Printing collection with iterators");
	print_collection(mstack);
	std::cout << std::endl;


	printTop("Calling copy constructor and stack size() method with copy");
	MutantStack<int> s(mstack);
	std::cout << s.size() << std::endl;
	printTop("Printing collection with iterators");
	print_collection(s);
	std::cout << std::endl;

	printTop("Calling assignation operator and stack size() method with copy");
	MutantStack<int> s2;
	s2 = s;
	std::cout << s.size() << std::endl;
	printTop("Printing collection with iterators");
	print_collection(s);
	return 0;
}

#define YELLOW		"\033[33m"
#define DEFAULT		"\033[0m"

void	printTop(std::string const & msg)
{
	std::cout << "---------------" << std::endl;
	std::cout << "-- " YELLOW  << msg << DEFAULT << std::endl;
}

template<typename T>
void	print_collection(MutantStack<T> &collection)
{
	typename MutantStack<T>::iterator it = collection.begin();
	typename MutantStack<T>::iterator ite = collection.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}