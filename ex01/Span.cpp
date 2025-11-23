/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 23:24:56 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/11/23 05:18:06 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span(unsigned int N) : N_(N) {}

Span::Span(const Span& obj) : numbers_(obj.numbers_), N_(obj.N_) {}

Span& Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		N_ = obj.N_;
		numbers_ = obj.numbers_;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int nb)
{
	if (numbers_.size() >= N_)
		throw std::overflow_error("Maximum numbers N reached");
	numbers_.push_back(nb);
}

int Span::operator[](int index)
{
	return numbers_[index];
}

int Span::shortestSpan() const
{
	if (numbers_.size() < 2)
		throw std::logic_error("Not enough elements");
	std::vector<int> sorted = numbers_;
	std::sort(sorted.begin(), sorted.end());
	int minSpan = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size(); i++)
	{
		int diff = sorted[i] - sorted[i - 1];
		if (diff < minSpan)
			minSpan = diff;
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (numbers_.size() < 2)
		throw std::logic_error("Not enough elements");
	int minVal = *std::min_element(numbers_.begin(), numbers_.end());
	int maxVal = *std::max_element(numbers_.begin(), numbers_.end());
	return maxVal - minVal;
}

void Span::printNumbers() const
{
	std::cout << "[ ";
	for (size_t i = 0; i < numbers_.size(); ++i)
		std::cout << numbers_[i] << " ";
	std::cout << "]" << std::endl;
}
