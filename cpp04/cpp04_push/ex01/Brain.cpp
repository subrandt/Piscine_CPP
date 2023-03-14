/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:54:48 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/27 15:28:52 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "idea"; //init ideas
		if (i == 99)
			std::cout << i + 1 << " ideas in this brain" << std::endl;
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

std::string *Brain::getIdeas(void)
{
	return (_ideas);
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
