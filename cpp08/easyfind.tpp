/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:15:31 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/29 13:54:21 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
Easyfind<T>::Easyfind(void)
{
	std::cout << "Default Easyfind constructor called" << std::endl;
	_array = new T[0];
}

template <typename T>
Easyfind<T>::Easyfind(Easyfind const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	_array = NULL;
	*this = src;
}

template <typename T>
Easyfind<T>::~Easyfind(void)
{
	std::cout << "Easyfind Destructor called" << std::endl;
	delete [] _array; 
}

template <typename T>
Easyfind<T> & Easyfind<T>::operator=(Easyfind<T> const & rhs)
{
	std::cout << "Easyfind assignment operator called" << std::endl;
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
T & Easyfind<T>::operator[](unsigned int const & index)
{
	if (index >= _n)
	{
		throw(Easyfind<T>::InvalidIndex());
	}
	return (_array[index]);
}
