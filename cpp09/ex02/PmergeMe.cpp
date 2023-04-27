/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:22:34 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/26 15:17:16 by subrandt         ###   ########.fr       */
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

void PmergeMe::insert_sort(std::vector<int> & vector)
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

	for (size_t i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::merge_sort(std::vector<int> & vector_left, std::vector<int> & vector_right)
{
	std::merge(vector_left.begin(), vector_left.end(), vector_right.begin(),
	vector_right.end(),_vector.begin());

	//print after sorting:
	std::cout << "After: " ;
	for (size_t k = 0; k < _vector.size(); k++)
	{
		std::cout << _vector[k] << " ";
	}
	std::cout << std::endl;

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
	std::cout << "left side insert sort: " << std::endl;
	insert_sort(_vector_left);
	std::cout << "right side insert sort: " << std::endl;
	insert_sort(_vector_right);
	merge_sort(_vector_left, _vector_right);
	
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
}
