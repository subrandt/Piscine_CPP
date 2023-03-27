/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:15:31 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/27 17:52:06 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(void)
{
	std::cout << "Default Array constructor called" << std::endl;
	_array = new T[0];
}

Array::Array(const unsigned int n) : _n(n)
{
	std::cout << "Element constructor called" << std::endl;
}

Array::Array(Array const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Array::~Array(void)
{
	std::cout << "Array Destructor called" << std::endl;
	delete [] _array;
}

Array & Array::operator=(Array const & rhs)
{
	std::cout << "Array assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_n = rhs._n;
	}
	return (*this);
}


//A member function size() that returns the number of elements in the array. 
//This member function takes no parameter and must not modify the current instance.
int	Array::size()
{

}

// When accessing an element with the [ ] operator, if its index is out of bounds, an
// std::exception is thrown.
const char * Array::InvalidIndex::what() const throw()
{
	return ("Invalid Index");
}