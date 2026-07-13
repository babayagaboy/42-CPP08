/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:42:43 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/13 16:07:07 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
int easyfind( T cont, int v ) throw( std::invalid_argument )
{
	for(unsigned long i = 0; i < cont.size(); ++i) {
		if (cont[i] == v) { return (v); }
	}
	throw(std::invalid_argument("parameter not found"));
}

#endif