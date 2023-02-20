/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:36:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/20 16:18:24 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.cpp"

Animal::Animal(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << name << " constructor called" << std::endl;
}

Animal::Animal(Animal const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << this->_type <<"destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{

}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream & o, Animal const & i);
{
	o << i.getType() << std::endl;
	return (o);
}