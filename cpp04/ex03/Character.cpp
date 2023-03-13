/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:10:20 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/13 16:43:44 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(std::string name)
{
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
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
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete(_inventory[i]);
	}
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx])
	{
		_inventory[idx]->use(target);
	}
}

Character & Character::operator=(Character const & rhs)
{
	std::cout << "Character assignement operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (rhs._inventory[i])
			{
				_inventory[i] = rhs._inventory[i]->clone();
			}
		}
	}
	return (*this);
}
