/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:10:20 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/01 15:18:51 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(void) : ICharacter (void)
{
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(Character const & src) : ICharacter(src)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character(void)
{
	std::cout << "Default Character destructor called" << std::endl;
}

std::string const & Character::getName() const
{
	return (_name);
}

virtual void equip(ICharacter* m)
{

}

virtual void unequip(int idx)
{

}

virtual void use(int idx, Character& target)
{
	
}

Character & Character::operator=(Character const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs.getName();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream & o, Character const & i)
{
	o << i.getType();
	return (o);
}
