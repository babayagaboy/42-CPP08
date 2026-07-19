/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:36:12 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/19 19:58:25 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _n(0)
{
	// std::cout << "Span Default constructor called." << std::endl;
}

Span::Span( unsigned int n ) : _n(n)
{
	// std::cout << "Span Default constructor called." << std::endl;
}

Span::Span( const Span& other ) : _n(other._n)
{
	// std::cout << "Span Copy constructor called." << std::endl;
	*this = other;
}

Span& Span::operator=( const Span& other )
{
	// std::cout << "Span Copy assignment called." << std::endl;
	if (this != &other)
	{
		this->_n = other._n;
		this->_v = other._v;
	}
	return (*this);
}

Span::~Span( void )
{
	// std::cout << "Span Destructor called." << std::endl;
}

void	Span::addNumber( int num )
{
	if (this->_v.size() >= this->_n)
		throw (std::out_of_range("span full"));
	this->_v.push_back(num);
}

int		Span::shortestSpan()
{
	// if(this->_v.size() <= 1)
		// throw(std::);

	int shortest = *(this->_v.begin());

	for (std::vector<int>::iterator it = this->_v.begin(); it != this->_v.end(); ++it)
	{
		if (*it < shortest)
			shortest = *it;
	}
	return (shortest);
}

int		Span::longestSpan()
{
	int longest = *(this->_v.begin());

	for (std::vector<int>::iterator it = this->_v.begin(); it != this->_v.end(); ++it)
	{
		if (*it > longest)
			longest = *it;
	}
	return (longest);
}
