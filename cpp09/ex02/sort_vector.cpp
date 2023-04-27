/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_vector.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:24:13 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/27 16:53:29 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


/* ************************************************************************** */
/*								Sort Functions - Vector						  */
/* ************************************************************************** */

std::vector<int>	PmergeMe::insert_sort_vector(std::vector<int> vector)
{
	
	for (size_t i = 1; i < vector.size(); i++)
	{
		int comp = i;
		while (comp > 0)
		{
			if(vector[comp] < vector[comp - 1])
			{
				std::swap(vector[comp], vector[comp - 1]);
			}
			comp--;
		}
	}

	return (vector);
}

std::vector<int>	PmergeMe::merge_sort_vector(std::vector<int> left, std::vector<int> right)
{
	std::vector<int> result(left.size() + right.size());
	
	std::merge(left.begin(), left.end(), right.begin(),	right.end(), result.begin());

	return(result);

}

std::vector<int>	PmergeMe::sort_vector(std::vector<int> vector)
{
	size_t size = 0;
	std::vector<int> left;
	std::vector<int> right;

	if (vector.size() > 20)
	{
		
		for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		{
			if (size < vector.size() / 2)
				left.push_back(*it);
			else
				right.push_back(*it);
			size++;
		}
		
		left = sort_vector(left);
		right = sort_vector(right);
		
		return (merge_sort_vector(left, right));
	}
	
	return (insert_sort_vector(vector));
}
