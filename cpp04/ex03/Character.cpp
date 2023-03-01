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


Character::Character(void)
{
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(std::string &name)
{
	_name = name;
	std::cout << "Name constructor of Character called" << std::endl;
}


Character::Character(Character const & src)
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

// virtual void equip(ICharacter* m)
// {

// }

// virtual void unequip(int idx)
// {

// }

// virtual void use(int idx, Character& target)
// {
	
// }

Character & Character::operator=(Character const & rhs)
{
	std::cout << "Character assignement operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs.getName();
	}
	return (*this);
}
