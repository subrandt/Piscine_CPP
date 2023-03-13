/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:38:11 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/13 16:18:08 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria ("ice")
{
	// _type = "ice";
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria(src)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice(void)
{
	std::cout << "Default Ice destructor called" << std::endl;
}

AMateria	*Ice::clone(void) const
{
	Ice *new_ice_clone = new Ice;
	return (new_ice_clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice & Ice::operator=(Ice const & rhs)
{
	(void)rhs;	
	return (*this);
}
