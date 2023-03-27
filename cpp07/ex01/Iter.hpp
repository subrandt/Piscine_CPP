/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:45:40 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/27 13:51:07 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cctype>

template<typename ITER>
void	ft_mult(ITER & value)
{
	std::cout << value * 2 << std::endl;
}

template<typename ITER>
void	ft_toupper(ITER & value)
{
	std::string str = value;
	for(int i = 0; i < (int)str.length(); i++)
		std::cout << (char)toupper(str[i]);
	std::cout << std::endl;
}

template<typename ITER>
void	ft_print(ITER & value)
{
	std::cout << value << std::endl;
}

template<typename ITER>
void	iter(ITER *array, int len, void (*fun)(ITER &))
{
	for (int i = 0; i < len; i++)
	{
		fun(array[i]);
	}
}


#endif