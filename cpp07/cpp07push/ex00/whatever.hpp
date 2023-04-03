/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:20:08 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/29 13:48:37 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename SWAP>
void swap(SWAP & a, SWAP & b)
{
	SWAP tmp(a);
	a = b;
	b = tmp;
}

template< typename MIN>
MIN const & min(MIN const & a, MIN const & b)
{
	return (a<=b?a:b);
}

template< typename MAX>
MAX const & max(MAX const & a, MAX const & b)
{
	return (a>=b?a:b);
}


#endif