#include "span.hpp"

Span::Span(): size_(0) {}

Span::Span(unsigned int N): size_(N) {}

Span::~Span() {}

Span::Span(const Span &other): elems_(other.elems_), size_(other.size_) {}

Span & Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->elems_ = other.elems_;
		this->size_ = other.size_;
	}
	return (*this);
}

void Span::addNumber(unsigned int num)
{
	if (size_ == elems_.size())
		throw TooManyElementsException();
	this->elems_.insert(num);
}

template<typename It> 
void	Span::addNumber(It begin, It end)
{
	elems_.insert(begin, end);
	if (elems_.size() > size_)
		throw TooManyElementsException();
}

void TemporaryFunction ()
{
    Span a(5);
	std::vector<int>::iterator itr1;
	std::vector<int>::iterator itr2;
	a.addNumber(itr1, itr2);
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
