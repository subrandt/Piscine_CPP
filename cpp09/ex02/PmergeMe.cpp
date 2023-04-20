/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:22:34 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/20 11:27:49 by subrandt         ###   ########.fr       */
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
/*								Other Functions								  */
/* ************************************************************************** */

void	PmergeMe_operation()
{
	
}
