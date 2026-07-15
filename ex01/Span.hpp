/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:36:16 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/14 15:41:51 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdexcept>

// template <typename T>
class Span {
	private:
		// T				*_arr;
		unsigned int	_n;
	public:
		Span( void );
		Span( unsigned int n );
		Span( const Span& other );
		Span& operator=( const Span& other );
		~Span( void );
};

#endif