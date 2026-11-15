/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:42:43 by hgutterr          #+#    #+#             */
/*   Updated: 2026/11/15 14:53:19 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <stdexcept>

template <typename T>
int easyfind( T& cont, int v ) throw( std::invalid_argument )
{
	if(std::find(cont.begin(), cont.end(), v) != cont.end()) {
		return (v); 
	} else {
		throw(std::invalid_argument("parameter not found"));
	}
}

#endif