/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:14:48 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/24 18:38:53 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	if (DEBUG)
		std::cout << "Span Default constructor called" << std::endl;
	this->_nbr = 0;
	this->_size = 0;
}

Span::~Span(void)
{
	if (DEBUG)
		std::cout << "Span Destructor called" << std::endl;
}

Span::Span(const Span& obj)
{
	if (DEBUG)
		std::cout << "Span Copy constructor called" << std::endl;
	this->_nbr = obj._nbr;
	this->_size = obj._size;
	for (std::vector<int>::const_iterator it = obj.vec.begin(); it != obj.vec.end(); ++it)
		this->vec.push_back(*it);
}

Span& Span::operator=(const Span& obj)
{
	if (DEBUG)
		std::cout << "Span Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_nbr = obj._nbr;
		this->_size = obj._size;
		for (std::vector<int>::const_iterator it = obj.vec.begin(); it != obj.vec.end(); ++it)
		this->vec.push_back(*it);
	}
	return (*this);
}

Span::Span(uint32_t N)
{
	if (DEBUG)
		std::cout << "Parametrize constructor called" << std::endl;
	this->vec.reserve(N);
	this->_nbr = N;
	this->_size = 0;
}

void	Span::addNumber(int nbr)
{
	if (this->_nbr == this->_size)
		throw std::string("out of bound");
	this->vec.push_back(nbr);
	this->_size++;
}

void printing(std::vector<int>& vec) //! delete this
{
	std::cout << " --------------------------- " << std::endl;
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << "nbr: " << *it << std::endl;
	}
	std::cout << " --------------------------- " << std::endl;
}

uint32_t	Span::shortestSpan()
{
	int	res = INT_MAX;
	int	_size = this->vec.size();
	int	i = 0;
	int	j;
	if (_size < 2)
		throw std::string("could not determine it");
	while (i < _size - 1)
	{
		j = i + 1;
		while (j < _size)
		{
			if (std::abs(this->vec[i] - this->vec[j]) < res)
			{
				res = std::abs(this->vec[i] - this->vec[j]);
			}
			j++;
		}
		i++;
	}
	return (res);
}

uint32_t	Span::longestSpan()
{
	uint32_t	res;
	if (this->vec.size() < 2)
		throw std::string("could not determine it");
	std::vector<int>	tmp = this->vec;
	std::sort(tmp.begin(), tmp.end());
	long	rs = (tmp.at(tmp.size() - 1)) - tmp.at(0);
	res = std::abs(rs);
	return (res);
}

void		Span::addNumber(std::vector<int>& newArr)
{
	try
	{
		for (std::vector<int>::iterator it = newArr.begin(); it != newArr.end(); ++it)
		{
			this->addNumber(*it);
		}
	}
	catch(const std::string& e)
	{
		throw std::string(e);
	}
}

