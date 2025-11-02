/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 23:51:46 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/11/03 00:07:20 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		try
		{
            sp.addNumber(42);
        }
		catch (const std::exception& e)
		{
            std::cout << "sp 42: " << e.what() << std::endl;
        }
		sp.printNumbers();
		
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
		
		Span tiny(1);
        tiny.addNumber(7);
        try
		{
            std::cout << tiny.shortestSpan() << std::endl;
        }
		catch (const std::exception& e)
		{
            std::cout << "tiny: " << e.what() << std::endl;
        }
		std::cout << std::endl;
		Span bigSpan(10000);

		for (int i = 0; i < 10000; i++)
			bigSpan.addNumber(std::rand() % 10000001);
		
		std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl;
		std::cout << "Longest span : " << bigSpan.longestSpan() << std::endl;
		std::cout << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}