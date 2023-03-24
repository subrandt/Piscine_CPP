/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:45:40 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/24 18:27:43 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename ITER>
void	ft_mult(ITER & value)
{
	std::cout << value * 2 << std::endl;
}

template<typename ITER>
void	ft_print(ITER & value)
{
	std::cout << value << std::endl;
}

template<typename ITER>
void	iter(ITER *array, ITER len, void (*fun)(ITER &))
{
	for (int i = 0; i < len; i++)
	{
		fun(array[i]);
	}
}


#endif