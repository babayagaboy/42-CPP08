/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:36:04 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/20 19:04:30 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	try
	{
		Span it(5);
		it.addNumber(1);
		it.addNumber(2);
		it.addNumber(3);
		it.addNumber(4);
		it.addNumber(5);

		std::cout << it.longestSpan() << std::endl;
		std::cout << it.shortestSpan() << std::endl;
	}
	catch( std::exception &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
	try
	{
		Span it(1);

		std::cout << it.longestSpan() << std::endl;
		std::cout << it.shortestSpan() << std::endl;
	}
	catch( std::exception &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
	try
	{
		Span it(100000);
		for (size_t i = 0; i < 100000; ++i)
			it.addNumber(i);
		std::cout << it.longestSpan() << std::endl;
		it.addNumber(1);
	}
	catch( std::exception &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
}