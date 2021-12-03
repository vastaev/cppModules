#include <cstdlib>
#include <iostream>

void	print_testName(std::string testName);

class Base
{
	public:
		virtual ~Base() {}
};

class A: public Base {};

class B: public Base {};

class C: public Base {};

Base * generate(void)
{
	int r = std::rand() % 3;
	Base *ptr = 0;

	if (r == 0)
	{
		ptr = new A();
		std::cout << "A";
	}
	else if (r == 1)
	{
		ptr = new B();
		std::cout << "B";
	}
	else
	{
		ptr = new C();
		std::cout << "C";
	}
	std::cout << " - created by random" << std::endl;
	return (ptr);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cout << "NULL";
	std::cout << " - result of pointer indentity" << std::endl;
}

void identify(Base &p)
{
	if ((void *)&p == NULL)
	{
		std::cout << "reference is NULL" << std::endl;
		return ;
	}
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A - result of reference identity" << std::endl;
	}
	catch (std::bad_cast)
	{
		std::cout << "reference is not A" << std::endl;
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B - result of reference identity" << std::endl;
	}
	catch (std::bad_cast) 
	{
		std::cout << "reference is not B" << std::endl;
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C - result of reference identity" << std::endl;
	}
	catch (std::bad_cast)
	{
		std::cout << "reference is not C" << std::endl;
	}
}

int main(void)
{
	std::srand(std::time(NULL));

	print_testName("Generating instance");

	Base *ptr = generate();

	std::cout << std::endl;
	print_testName("Normal test ptr");
	identify(ptr);
	std::cout << std::endl;

	print_testName("Normal test ref");
	identify(*ptr);
	std::cout << std::endl;
	
	print_testName("NULL test ptr");
	identify(0);
	std::cout << std::endl;

	print_testName("NULL test ref");
	ptr = NULL;
	identify(*ptr);
}

void	print_testName(std::string testName)
{
	std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "  " << testName << std::endl;
	std::cout << "~~~~~~~~~~~~~~~"<< std::endl;
}
