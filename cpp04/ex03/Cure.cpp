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

#include "Cure.cpp"

Cure::Cure(void) : AMateria (void)
{
	_type = "cure";
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(std::string const & type)
{
	_type = type;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure(void)
{
	std::cout << "Default Cure destructor called" << std::endl;
}

std::string const & Cure::getType() const //Returns the materia type
{
	return (_type);
}

virtual void use(ICharacter& target)
{

}

Cure & Cure::operator=(Cure const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs.getType();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream & o, Cure const & i)
{
	o << i.getType();
	return (o);
}
