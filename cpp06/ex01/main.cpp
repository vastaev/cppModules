#include "Data.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data *ptr = new Data;
	ptr->name_ = "Oleg";
	uintptr_t n1 = serialize(ptr);
	std::cout << n1 << std::endl;
	Data *n2 = deserialize(n1);
	std::cout << "serialize: " <<  n1 << std::endl;
	std::cout << "deserialize: " << n2 << std::endl;
	std::cout << "contents n2: " << n2->name_ << std::endl;
}