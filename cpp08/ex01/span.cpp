#include "span.hpp"

Span::Span(): size_(0) {}

Span::Span(unsigned int N): size_(N) {}

void Span::addNumber(unsigned int num)
{
	if (size_ == elems_.size())
		throw TooManyElementsException("No space for new element");
	this->elems_.insert(num);
}

int	Span::shortestSpan()
{
	std::multiset<int>::iterator end = elems_.end();
	std::multiset<int>::iterator itr = elems_.begin();
	std::multiset<int>::iterator itrup = elems_.upper_bound(*itr);
	int ret = *itrup - *itr;
	while (itrup != end)
	{
		++itrup;
		++itr;
		int tmp = *itrup - *itr;
		if (std::abs(tmp) < std::abs(ret))
			ret = tmp;
	}
	return (ret);
}

Span::TooManyElementsException::TooManyElementsException(std::string const &msg)
{
	std::cout << msg << std::endl;
}

Span::NoSpanToFindException::NoSpanToFindException(std::string const &msg)
{
	std::cout << msg << std::endl;
}
