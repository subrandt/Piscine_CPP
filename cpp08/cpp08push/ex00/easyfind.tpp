/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:15:31 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/05 11:35:12 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void	easyfind(T container, int const & number)
{
	typename T::iterator	it;
	typename T::iterator 	start;
	typename T::iterator 	end;

	start = container.begin();
 	end = container.end();
	it = std::find(start, end, number);
	if (it == end)
	{
		throw(IntegerNotFound());
	}
	else
	{
		std::cout << "number found in the list" << std::endl;
	}
}
