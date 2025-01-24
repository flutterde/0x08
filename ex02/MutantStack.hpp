#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <deque>

template <class T>
class MutantStack : public std::stack<T> {
	public:
	MutantStack();
	MutantStack(const MutantStack& obj);
	MutantStack&	operator=(const MutantStack& obj);
	~MutantStack();
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	iterator begin();
    iterator end();

};

#include "MutantStack.tpp"

#endif