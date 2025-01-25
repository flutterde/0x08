/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:34:20 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/25 10:34:20 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	iterator	begin();
    iterator	end();
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator begin() const ;
	const_iterator end() const ;

};

#include "MutantStack.tpp"

#endif