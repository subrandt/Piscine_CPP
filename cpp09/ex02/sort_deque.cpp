/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_deque.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:24:13 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/28 14:16:22 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* ************************************************************************** */
/*								Sort Functions - Deque						  */
/* ************************************************************************** */

std::deque<int>	PmergeMe::insert_sort_deque(std::deque<int> deque)
{
	
	for (size_t i = 1; i < deque.size(); i++)
	{
		int comp = i;
		while (comp > 0)
		{
			if(deque[comp] < deque[comp - 1])
			{
				std::swap(deque[comp], deque[comp - 1]);
			}
			comp--;
		}
	}
	return (deque);
}

std::deque<int>	PmergeMe::merge_sort_deque(std::deque<int> left, std::deque<int> right)
{
	std::deque<int> result(left.size() + right.size());
	
	std::merge(left.begin(), left.end(), right.begin(),	right.end(), result.begin());

	return(result);
}

std::deque<int>	PmergeMe::sort_deque(std::deque<int> deque)
{
	size_t size = 0;
	std::deque<int> left;
	std::deque<int> right;

	if (deque.size() > 20)
	{
		for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it++)
		{
			if (size < deque.size() / 2)
				left.push_back(*it);
			else
				right.push_back(*it);
			size++;
		}
		left = sort_deque(left);
		right = sort_deque(right);
		
		return (merge_sort_deque(left, right));
	}
	return (insert_sort_deque(deque));
}
