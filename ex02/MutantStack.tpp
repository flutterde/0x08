/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 09:48:27 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/25 09:48:27 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <class T>
MutantStack<T>::MutantStack()
{}

template <class T>
MutantStack<T>::~MutantStack()
{}

template <class T>
MutantStack<T>::MutantStack(const MutantStack& obj)
{
	*this = obj;
}

template <class T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& obj)
{
	if (this != &obj)
	{
		this->c = obj.c;
	}
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() { return this->c.begin(); }
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() { return this->c.end(); }

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const { return this->c.begin(); }
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const { return this->c.end(); }

