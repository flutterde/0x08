/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:03:44 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/24 18:45:50 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	example1()
{	
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "the shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "the longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::string &e)
	{
		std::cerr << e << '\n';
	}
}

void	example2()
{	
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(-9);
		sp.addNumber(11);
		std::cout << "the shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "the longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::string &e)
	{
		std::cerr << e << '\n';
	}
}

void	example3()
{	
	std::vector<int> arr;
	arr.push_back(10);
	arr.push_back(4);
	arr.push_back(578);
	arr.push_back(-454);
	arr.push_back(5);
	arr.push_back(9852);
	try
	{
		Span sp = Span(20);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(arr);
		std::cout << "the shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "the longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::string &e)
	{
		std::cerr << e << '\n';
	}
}

int main()
{
	example1();
	std::cout << " ----------------------------- " << std::endl;
	example2();
	std::cout << " ----------------------------- " << std::endl;
	example3();
}
