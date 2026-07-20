/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:36:16 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/20 19:05:25 by hgutterr         ###   ########.fr       */
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

		class noSpanFound : public std::exception {
			const char *what() const throw();
		};

		void	addNumber( int num ) throw(std::out_of_range);
		int		shortestSpan() throw(Span::noSpanFound);
		int		longestSpan() throw(Span::noSpanFound);


};

#endif