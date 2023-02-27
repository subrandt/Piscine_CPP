/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:52:25 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/27 16:25:43 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	Dog *copy = new Dog();
	copy->_type = src.getType();

	*this = *copy;

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
		this->_type = rhs.getType();
	}
	return (*this);
}
