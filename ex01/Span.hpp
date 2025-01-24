/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:14:51 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/24 18:34:57 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

#ifndef DEBUG
#define DEBUG 0
#endif

class Span
{
	private:
		Span(void);

		uint32_t			_nbr;
		uint32_t			_size;
		std::vector<int>	vec;

	public:
		Span(const Span& obj);
		Span(uint32_t N);
		Span&	operator=(const Span& obj);
		~Span();

		void		addNumber(int nbr);
		uint32_t	shortestSpan();
		uint32_t	longestSpan();
		void		addNumber(std::vector<int>& newArr);
};

#endif
