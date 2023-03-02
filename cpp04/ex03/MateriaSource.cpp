/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:30:30 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/02 08:30:33 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
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
	
    
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Default MateriaSource destructor called" << std::endl;
}

// void MateriaSource::learnMateria(AMateria*)
// {

// }

// AMateria *MateriaSource::createMateria(std::string const & type)
// {

// }