/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:38:11 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/01 15:17:40 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.cpp"

Ice::Ice(void) : AMateria (void)
{
	_type = "ice";
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(std::string const & type)
{
	_type = type;
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

std::string const & Ice::getType() const //Returns the materia type
{
	return (_type);
}

virtual void use(ICharacter& target)
{

}

Ice & Ice::operator=(Ice const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs.getType();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream & o, Ice const & i)
{
	o << i.getType();
	return (o);
}
