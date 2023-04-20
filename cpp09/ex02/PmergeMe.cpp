/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:22:34 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/20 15:37:51 by subrandt         ###   ########.fr       */
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

static void print_after(void);
{
	std::cout << "After: " ;
	
	std::cout << std::endl;
}

/* ************************************************************************** */
/*								Sort Functions								  */
/* ************************************************************************** */

static void	sort_algo(void)
{
	
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
	sort_algo(void);
	print_after(void);
}
