#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <iostream>
#include <string>
#include <vector>

#define YELLOW		"\033[33m"
#define DEFAULT		"\033[0m"

class Span {
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span &other);

		Span & operator=(const Span &other);

		void						addNumber(unsigned int num);
		template<class Itr> void	addNumber(Itr begin, Itr end);
		int							shortestSpan();
		int							longestSpan();
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