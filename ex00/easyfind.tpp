/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 21:36:20 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/11/02 21:45:30 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T& cont, int value)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), value);
	if (it == cont.end())
		throw std::out_of_range("Value not found");
	return it;
}

template<typename T>
typename T::const_iterator easyfind(const T& cont, int value)
{
	typename T::const_iterator it = std::find(cont.begin(), cont.end(), value);
	if (it == cont.end())
		throw std::out_of_range("Value not found");
	return it;
}
