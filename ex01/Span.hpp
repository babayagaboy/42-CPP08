/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:36:16 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/19 19:47:54 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <vector>
# include <iterator>

class Span {
	private:
		unsigned int		_n;
		std::vector<int>	_v;
	public:
		Span( void );
		Span( unsigned int n );
		Span( const Span& other );
		Span& operator=( const Span& other );
		~Span( void );

		void	addNumber( int num ) throw(std::out_of_range);
		int		shortestSpan();
		int		longestSpan();
};

#endif