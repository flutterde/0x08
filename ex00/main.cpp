/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:03:44 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/24 12:47:31 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <deque>

void	example1()
{
	std::vector<int>	vec;
	vec.push_back(15);
	vec.push_back(5);
	vec.push_back(3);
	try {
		std::vector<int>::iterator it = easyfind(vec, 53);
		std::cout << "the it is: " << *it << std::endl;
	} catch(std::string& e) {
		std::cout << "Error: " << e << "." << std::endl;
	}
}

void	example2()
{
	std::list<int>	lst;
	lst.push_front(5);
	lst.push_back(54);
	lst.push_front(52);
	try
	{
		std::list<int>::iterator it = easyfind(lst, 54);
		std::cout << "Found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}

void	example3()
{
	std::deque<int> myDeque;
	myDeque.push_front(598);
	myDeque.push_front(8);
	myDeque.push_front(58);
	myDeque.push_front(13);
	try
	{
		std::deque<int>::iterator it = easyfind(myDeque, 598);
		std::cout << "Found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}

int	main()
{
	example1();
	example2();
	example3();
}
