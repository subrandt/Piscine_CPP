/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:52:25 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/22 17:15:15 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << getType() << " destructor called" << std::endl; //this->_type??
}

void Dog::makeSound(void) const
{
	std::cout << "Wouaf wouaf!!" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream & o, Dog const & i)
{
	o << i.getType();
	return (o);
}
