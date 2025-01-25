/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 09:48:20 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/25 09:48:20 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void testConstIterator()
{
    MutantStack<int> mstack;
    mstack.push(10);
    mstack.push(20);
    mstack.push(30);
    const MutantStack<int>& constMstack = mstack;
    std::cout << "testing const_iterator:" << std::endl;
    for (MutantStack<int>::const_iterator it = constMstack.begin(); it != constMstack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
    std::cout << "original stack remains unchanged:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << " ------------------------------ " << std::endl;
	testConstIterator();
	return 0;
}