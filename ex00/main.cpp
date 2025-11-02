/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabou-ha <mabou-ha>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:29:33 by mabou-ha          #+#    #+#             */
/*   Updated: 2025/11/02 22:01:32 by mabou-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::vector<int> v;
	for (int i = 0; i < 5; i++)
		v.push_back(i * 10);
	try
	{
		std::vector<int>::iterator it_1 = easyfind(v, 30);
		std::cout << "[vector] found: " << *it_1 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "[vector] " << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::iterator it_1 = easyfind(v, 99);
		std::cout << "[vector] found: " << *it_1 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "[vector] " << e.what() << std::endl;
	}

	std::list<int> l;
	l.push_back(3);
	l.push_back(1);
	l.push_back(4);
	try
	{
		std::list<int>::iterator it_2 = easyfind(l, 3);
		std::cout << "[list] found: " << *it_2 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "[list] " << e.what() << std::endl;
	}
	try
	{
		std::list<int>::iterator it_2 = easyfind(l, 10);
		std::cout << "[list] found: " << *it_2 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "[list] " << e.what() << std::endl;
	}

	std::deque<int> d;
	d.push_back(7);
	d.push_back(8);
	d.push_back(9);
	const std::deque<int> &dq = d;
	std::cout << "[deque] contents:";
   	 for (std::deque<int>::const_iterator it = d.begin(); it != d.end(); ++it)
        	std::cout << ' ' << *it;
    	std::cout << std::endl;
	try
	{
		std::deque<int>::const_iterator it_3 = easyfind(dq, 9);
		std::cout << "[deque] found: " << *it_3 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "[deque] " << e.what() << std::endl;
	}
	try
	{
		std::deque<int>::const_iterator it_3 = easyfind(dq, 10);
		std::cout << "[deque] found: " << *it_3 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "[deque] " << e.what() << std::endl;
	}
}
