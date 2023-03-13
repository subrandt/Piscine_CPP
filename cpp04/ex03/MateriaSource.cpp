/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:30:30 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/13 17:00:28 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	_materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
    std::cout << "Default MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    std::cout << "MateriaSource assignement operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materias[i])
			{
				delete _materias[i];
				_materias[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (rhs._materias[i])
			{
				_materias[i] = rhs._materias[i]->clone();
			}
		}
	}
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Default MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete(_materias[i]);
	}
}

void MateriaSource::learnMateria(AMateria * m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = m;
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type)
		{
			AMateria *tmp = _materias[i]->clone();
			return (tmp);
		}
	}
	return (0);
}