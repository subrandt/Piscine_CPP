/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:36:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/28 11:16:27 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "Animal";
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (_type);
}

void	Animal::setType(std::string const type)
{
	_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << this->_type << " makes an animal sound" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream & o, Animal const & i)
{
	o << i.getType();
	return (o);
}