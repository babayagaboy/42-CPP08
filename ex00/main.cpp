/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:39:56 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/14 15:26:37 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <set>

int main()
{
	try
	{
		std::vector<int> l;
		for (int i = 0; i < 5; ++i) {
			l.push_back(i);
		}

		std::cout << EASYFIND_HPP::easyfind<std::vector<int> > (l, 3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::set<int> l;
		for (int i = 0; i < 5; ++i) {
			l.insert(i);
		}

		std::cout << EASYFIND_HPP::easyfind<std::set<int> > (l, 7) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}