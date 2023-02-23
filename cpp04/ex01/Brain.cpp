/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:54:48 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/23 13:08:21 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string ideas)
{
	this->_ideas = ideas;
	//init tableau?
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
	return (_ideas);
}

void Brain::setIdeas(std::string const ideas)
{
	_ideas = ideas;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->_ideas = rhs.getIdeas();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream & o, Brain const & i)
{
	o << i.getIdeas();
	return (o);
}
