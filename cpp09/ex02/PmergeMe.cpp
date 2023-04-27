/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:22:34 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/27 17:07:25 by subrandt         ###   ########.fr       */
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

void PmergeMe::print_after(void)
{
	std::cout << "After: " ;
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

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
	_vector = sort_vector(_vector);

	//calculer le temps

	_deque = sort_deque(_deque);
	print_after();
}
