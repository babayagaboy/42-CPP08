/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:36:12 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/14 15:55:07 by hgutterr         ###   ########.fr       */
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
	
}

Span::~Span( void )
{

}