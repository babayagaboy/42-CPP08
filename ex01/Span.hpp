/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:36:16 by hgutterr          #+#    #+#             */
/*   Updated: 2026/08/02 15:08:44 by hgutterr         ###   ########.fr       */
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
		
		class ContainerFullException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
	
		class NotEnoughNumbersException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		void	addNumber( int num ) throw(Span::ContainerFullException);
		int		shortestSpan() throw(Span::NotEnoughNumbersException);
		int		longestSpan() throw(Span::NotEnoughNumbersException);
};

#endif