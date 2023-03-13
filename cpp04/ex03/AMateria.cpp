/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:39:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/13 14:20:42 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria string constructor called";
	_type = type;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
    *this = src;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	std::cout << "AMateria assignement operator called" << std::endl;
	(void)rhs;
    return (*this);
}
AMateria::~AMateria(void)
{
	std::cout << "Default AMateria destructor called" << std::endl;
}
