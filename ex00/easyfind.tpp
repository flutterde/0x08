/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:04:57 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/24 12:43:09 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator	easyfind(T& cont, int val)
{
	for (typename T::iterator it = cont.begin(); it != cont.end(); ++it)
	{
		if (*it == val)
			return (it);
	}
	throw std::runtime_error("not found");
}
