/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:54:48 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/24 14:06:08 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = i; //init ideas
		}
}

Brain::Brain(Brain const & copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdeas(void) const
{
	return (*this->_ideas);
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain assignement operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return (*this);
}
