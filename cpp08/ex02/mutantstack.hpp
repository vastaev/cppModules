#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		virtual ~MutantStack();
		MutantStack(const MutantStack & other);

		MutantStack & operator=(const MutantStack & other);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin();
		iterator end();
};

#endif