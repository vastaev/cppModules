#include "span.hpp"

Span::Span(): size_(0) {}

Span::Span(unsigned int N): size_(N) {}

void Span::addNumber(unsigned int num)
{
	if (size_ == elems_.size())
		throw TooManyElementsException();
	this->elems_.insert(num);
}

int	Span::shortestSpan()
{
	if (elems_.size() < 2)
		throw NoSpanToFindException();
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

int	Span::longestSpan()
{
	if (elems_.size() < 2)
		throw NoSpanToFindException();
	return (*elems_.rbegin() - *elems_.begin());
}

Span::TooManyElementsException::TooManyElementsException()
{
	std::cout << "No space for new element" << std::endl;
}

Span::NoSpanToFindException::NoSpanToFindException()
{
	std::cout << "You need at least 2 elements in collection" << std::endl;
}
