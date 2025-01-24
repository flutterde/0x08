#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T> {
	public:
	MutantStack();
	MutantStack(const MutantStack& obj);
	MutantStack&	operator=(const MutantStack& obj);
	~MutantStack();
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	iterator		 begin();
    iterator		end();
	iterator	 cbegin();
    iterator	 cend();
    iterator	 rbegin();
    iterator	 rend();
    iterator	 crbegin();
    iterator	 crend();

};

#include "MutantStack.tpp"

#endif