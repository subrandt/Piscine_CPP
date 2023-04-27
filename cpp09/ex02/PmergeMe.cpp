/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:22:34 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/27 15:05:00 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


/* ************************************************************************** */
/*								Canonical Form								  */
/* ************************************************************************** */

PmergeMe::PmergeMe(void)
{
	// std::cout << "Default constructor called" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

PmergeMe::~PmergeMe(void)
{
	// std::cout << "Default destructor called " << std::endl;
}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs)
{
	if (this != &rhs)
	{
		_deque = rhs._deque;
		_vector = rhs._vector;
	}
	return (*this);
}

/* ************************************************************************** */
/*								Print Functions								  */
/* ************************************************************************** */

static void	print_before(char **argv)
{
	std::cout << "Before: " ;
	int i = 1;
	while(argv[i])
	{
		std::cout << atoi(argv[i]) << " ";
		i++;
	}
	std::cout << std::endl;
}

/* ************************************************************************** */
/*								Sort Functions								  */
/* ************************************************************************** */

std::vector<int>	PmergeMe::insert_sort(std::vector<int> vector)
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

std::vector<int>	PmergeMe::merge_sort(std::vector<int> left, std::vector<int> right)
{
	std::vector<int> result(left.size() + right.size());
	
	std::merge(left.begin(), left.end(), right.begin(),	right.end(), result.begin());

	return(result);

}

std::vector<int>	PmergeMe::sort_algo(std::vector<int> vector)
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
		
		left = sort_algo(left);
		right = sort_algo(right);
		
		return (merge_sort(left, right));
	}
	
	return (insert_sort(vector));
}

/* ************************************************************************** */
/*								Other Functions								  */
/* ************************************************************************** */

void	PmergeMe::init_container(char **argv)
{
	print_before(argv);
	int i = 1;
	while(argv[i])
	{
		int number = atoi(argv[i]);
		_vector.push_back(number);
		_deque.push_back(number);
		i++;
	}

	_vector = sort_algo(_vector);

	//print after sorting:
	std::cout << "After: " ;
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
