/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:15:31 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/28 14:32:18 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	std::cout << "Default Array constructor called" << std::endl;
	_array = new T[0];
}

template <typename T>
Array<T>::Array(const unsigned int n) : _n(n)
{
	std::cout << "Element constructor called" << std::endl;
	_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
	{
		_array[i] = T();
	}
}

template <typename T>
Array<T>::Array(Array const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	_array = NULL;
	*this = src;
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "Array Destructor called" << std::endl;
	delete [] _array; 
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
	std::cout << "Array assignment operator called" << std::endl;
	if (this != &rhs)
	{
		if (_array != NULL)
		{
			delete [] _array;
		}
		
		_n = rhs._n;
		_array = new T[_n];
		for (unsigned int i = 0; i < _n; i++)
		{
			_array[i] = rhs._array[i];
		}
	}
	return (*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int const & index)
{
	if (index >= _n)
	{
		throw(Array<T>::InvalidIndex());
	}
	return (_array[index]);
}



//A member function size() that returns the number of elements in the array. 
//This member function takes no parameter and must not modify the current instance.
template <typename T>
unsigned int	Array<T>::size()
{
	return (_n);
}

// When accessing an element with the [ ] operator, if its index is out of bounds, an
// std::exception is thrown.
template <typename T>
const char * Array<T>::InvalidIndex::what() const throw()
{
	return ("Invalid Index");
}