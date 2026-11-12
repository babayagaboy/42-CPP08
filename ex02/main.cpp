/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 16:36:45 by hgutterr          #+#    #+#             */
/*   Updated: 2026/09/15 14:43:01 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(10);
	mstack.push(20);
	mstack.push(30);

	std::cout << "iterator: ";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	const MutantStack<int> &constMstack = mstack;
	std::cout << "const_iterator: ";
	for (MutantStack<int>::const_iterator it = constMstack.begin();
		it != constMstack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "rev_iterator: ";
	for (MutantStack<int>::rev_iterator it = mstack.rbegin();
		it != mstack.rend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "const_rev_iterator: ";
	for (MutantStack<int>::const_rev_iterator it = constMstack.rbegin();
		it != constMstack.rend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	return 0;
}