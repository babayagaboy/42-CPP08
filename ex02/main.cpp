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
#include <cassert>

template <typename Iterator>
void printRange(Iterator begin, Iterator end)
{
	for (; begin != end; ++begin)
		std::cout << *begin << " ";
	std::cout << std::endl;
}

int main()
{
	MutantStack<int> mstack;

	assert(mstack.empty());
	mstack.push(5);
	mstack.push(17);
	assert(mstack.top() == 17);
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	assert(mstack.size() == 5);
	assert(mstack.top() == 0);

	const int forwardExpected[] = {5, 3, 5, 737, 0};
	int index = 0;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		assert(*it == forwardExpected[index++]);
	assert(index == 5);

	const int reverseExpected[] = {0, 737, 5, 3, 5};
	index = 0;
	for (MutantStack<int>::rev_iterator it = mstack.rbegin();
		it != mstack.rend(); ++it)
		assert(*it == reverseExpected[index++]);
	assert(index == 5);

	std::cout << "Forward: ";
	printRange(mstack.begin(), mstack.end());
	std::cout << "Reverse: ";
	printRange(mstack.rbegin(), mstack.rend());

	const MutantStack<int> &constView = mstack;
	assert(*constView.begin() == 5);
	assert(*constView.rbegin() == 0);

	MutantStack<int> copied(mstack);
	copied.push(99);
	assert(copied.top() == 99);
	assert(mstack.top() == 0);

	MutantStack<int> assigned;
	assigned = mstack;
	assert(assigned.size() == mstack.size());
	assert(assigned.top() == mstack.top());

	std::stack<int> standardStack(mstack);
	assert(standardStack.size() == mstack.size());
	assert(standardStack.top() == mstack.top());

	std::cout << "All MutantStack checks passed." << std::endl;
	return 0;
}