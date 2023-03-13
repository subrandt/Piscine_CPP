/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:38:11 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/01 15:00:36 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria ("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure(void)
{
	std::cout << "Default Cure destructor called" << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\' wounds *" << std::endl;
}

AMateria *Cure::clone(void) const
{
	Cure *new_clone = new Cure;
	return (new_clone);
}

Cure & Cure::operator=(Cure const & rhs)
{
	std::cout << "Cure assignement operator called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}
