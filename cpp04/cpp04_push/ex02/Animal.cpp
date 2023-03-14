/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:36:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/28 08:25:12 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void)
{
	this->_type = "AAnimal";
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << this->_type << " makes an animal sound" << std::endl;
}

Brain	*AAnimal::getBrain(void) const
{
	std::cout << "AAnimal gets a brain" << std::endl;
	return (NULL);
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream & o, AAnimal const & i)
{
	o << i.getType();
	return (o);
}