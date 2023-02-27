/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:05:59 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/27 13:25:18 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const & copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return(_brain);
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}
