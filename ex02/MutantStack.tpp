/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 19:47:30 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/20 19:47:30 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ) : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack &other ) : std::stack<T>(other)
{
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack &other )
{
	if (this != &other)
		this = &other;
	return(*this);
}

template <typename T>
MutantStack<T>::~MutantStack( void )
{
}
