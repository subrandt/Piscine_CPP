/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:20:55 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/28 11:40:36 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::setType(std::string const type)
{
	_type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->_type << " makes a wrong animal sound" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream & o, WrongAnimal const & i)
{
	o << i.getType();
	return (o);
}