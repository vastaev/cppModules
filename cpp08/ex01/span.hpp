#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <iostream>
#include <string>

class Span {
	public:
		Span();
		Span(unsigned int N);

		void	addNumber(unsigned int num);
		int		shortestSpan();
		int		longestSpan();
	private:
		std::multiset<int>	elems_;
		unsigned int		size_;

	class TooManyElementsException: public std::exception
	{
		public:
			TooManyElementsException();
	};
	class NoSpanToFindException: public std::exception
	{
		public:
			NoSpanToFindException();
	};
};

#endif