/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:36:04 by hgutterr          #+#    #+#             */
/*   Updated: 2026/11/15 15:06:23 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>


int main()
{
	Span it = Span(5);
	try
	{
		int n = 1;
		for (int i = 0; i < 5; ++i) {
			it.addNumber(n);
			n *= 2;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
			it.addNumber(10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		it.printSpan();
		std::cout << "shortest : " << it.shortestSpan() << std::endl;
		std::cout << "longest : " << it.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}