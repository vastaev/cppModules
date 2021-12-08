#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack: std::stack<T>
{
	public:
		MutantStack<T>();
		virtual ~MutantStack<T>();
		MutantStack<T>(const MutantStack<T> &other);

		MutantStack<T> & operator=(const MutantStack<T> &other);
		typename std::stack<T>::container_type::iterator it;
};

#endif