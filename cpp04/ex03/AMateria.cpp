/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:39:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/01 15:17:05 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "Default AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const //Returns the materia type
{
	return (_type);
}

virtual void use(ICharacter& target)
{

}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs.getType();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream & o, AMateria const & i)
{
	o << i.getType();
	return (o);
}
