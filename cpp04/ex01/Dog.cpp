/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:52:25 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/28 16:45:56 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	_type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain();
	
	*this = src;

}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Wouaf wouaf!!" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return(_brain);
}


Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs.getType();
		*_brain = *rhs._brain;
	}
	return (*this);
}
