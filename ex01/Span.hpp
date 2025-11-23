/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 23:02:24 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/11/23 05:18:02 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		std::vector<int> numbers_;
		unsigned int N_;
	public:
		Span(unsigned int N);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();
		int operator[](int index);
		void addNumber(int nb);
		int shortestSpan() const;
		int longestSpan() const;
		void printNumbers() const;
};

#endif