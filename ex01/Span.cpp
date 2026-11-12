/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:36:12 by hgutterr          #+#    #+#             */
/*   Updated: 2026/11/12 16:23:48 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _n(0)
{
}

Span::Span( unsigned int n ) : _n(n)
{
}

Span::Span( const Span& other ) : _n(other._n)
{
	*this = other;
}

Span& Span::operator=( const Span& other )
{
	if (this != &other)
	{
		this->_n = other._n;
		this->_v = other._v;
	}
	return (*this);
}

Span::~Span( void )
{
}

const char* Span::ContainerFullException::what() const throw() {
	return ("span full");
}

const char* Span::NotEnoughNumbersException::what() const throw() {
	return ("not enought numbers");
}

void	Span::addNumber( int num ) throw (Span::ContainerFullException)
{
	if (this->_v.size() >= this->_n)
		throw (Span::ContainerFullException());
	this->_v.push_back(num);
}

int		Span::shortestSpan() throw(Span::NotEnoughNumbersException)
{
	if(this->_v.size() <= 1)
		throw(Span::NotEnoughNumbersException());

	int shortest = *(this->_v.begin());

	for (std::vector<int>::iterator it = this->_v.begin(); it != this->_v.end(); ++it)
	{
		if (*it < shortest)
			shortest = *it;
	}
	return (shortest);
}

int		Span::longestSpan() throw(Span::NotEnoughNumbersException)
{
	if(this->_v.size() <= 1)
		throw(Span::NotEnoughNumbersException());

	int longest = *(this->_v.begin());

	for (std::vector<int>::iterator it = this->_v.begin(); it != this->_v.end(); ++it)
	{
		if (*it > longest)
			longest = *it;
	}
	return (longest);
}
