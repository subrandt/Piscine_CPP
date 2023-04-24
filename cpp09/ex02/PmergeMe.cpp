/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:22:34 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/24 18:18:06 by subrandt         ###   ########.fr       */
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

// static void print_after(void);
// {
// 	std::cout << "After: " ;
	
// 	std::cout << std::endl;
// }

/* ************************************************************************** */
/*								Sort Functions								  */
/* ************************************************************************** */

void PmergeMe::insert_sort(std::vector<int> vector)
{
	
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
	{
		size_t i = 0;
		std::vector<int>::iterator it_next = it++;
		if (it_next < it && it_next != vector.end())
		{
			std::swap(vector[i], vector[i+1]);
			it_next++;
		}
		it_next++;
	}

	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
	{
		std::cout << "it: " << *it << std::endl;
	}
}

void	PmergeMe::sort_algo(void)
{
	std::vector<int>::iterator it;
	std::vector<int>::iterator it_middle;
	std::vector<int>::iterator it_end = _vector.end();


	size_t i = 0;
	for (it = _vector.begin(); it != it_end; it++)
	{
		if (i < _vector.size() / 2)
		{
			_vector_left.push_back(_vector.at(i));
		}
		if (i >= _vector.size() / 2)
		{
			it_middle = it;
			_vector_right.push_back(_vector.at(i));
		}
		i++;

	}
	insert_sort(_vector_left);
	insert_sort(_vector_right);
	// merge_sort(vector_left, vector_right);
	

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
	sort_algo();
	// print_after(void);
}
