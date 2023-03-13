/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:39:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/13 11:56:00 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria string constructor called";
	_type = type;
}

std::string const & AMateria::getType() const //Returns the materia type
{
	return (_type);
}

// forme coplienne