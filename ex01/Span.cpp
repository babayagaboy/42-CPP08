/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:36:12 by hgutterr          #+#    #+#             */
/*   Updated: 2026/11/15 15:11:38 by hgutterr         ###   ########.fr       */
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

int Span::shortestSpan() throw(Span::NotEnoughNumbersException)
{
	if (this->_v.size() < 2)
		throw Span::NotEnoughNumbersException();

	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());

	int shortest = tmp[1] - tmp[0];

	for (size_t i = 1; i < tmp.size() - 1; ++i)
	{
		int diff = tmp[i + 1] - tmp[i];
		if (diff < shortest)
			shortest = diff;
	}
	return (shortest);
}

int Span::longestSpan() throw(Span::NotEnoughNumbersException)
{
	if (this->_v.size() < 2)
		throw Span::NotEnoughNumbersException();

	int min = *std::min_element(this->_v.begin(), this->_v.end());
	int max = *std::max_element(this->_v.begin(), this->_v.end());

	return (max - min);
}

void Span::printSpan()
{
	for(unsigned int i = 0; i < this->_n; ++i) {
		std::cout << this->_v[i] << ", ";
	}
	std::cout << std::endl;
}
