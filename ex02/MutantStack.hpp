/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 00:10:17 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/11/23 06:23:49 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack& obj);
		MutantStack& operator=(const MutantStack& obj);
		~MutantStack();
		typedef std::stack<T> base_type;
		typedef typename base_type::container_type::iterator iterator;
		typedef typename base_type::container_type::const_iterator const_iterator;
		typedef typename base_type::container_type::reverse_iterator reverse_iterator;
		typedef typename base_type::container_type::const_reverse_iterator const_reverse_iterator;
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
		reverse_iterator rbegin();
		reverse_iterator rend();
		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"

#endif