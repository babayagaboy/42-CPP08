/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 19:38:49 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/20 19:38:49 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : std::stack<T> {		
	public:
		MutantStack( void );
		MutantStack( const MutantStack &other );
		MutantStack& operator=( const MutantStack &other );
		~MutantStack( void );

		
};