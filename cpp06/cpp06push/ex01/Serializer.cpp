/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:07:14 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/21 17:43:38 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	// std::cout << "Default Serializer constructor called" << std::endl;
}

Serializer::Serializer(Serializer const & src)
{
	// std::cout << _name << "'s copy constructor called" << std::endl;
	*this = src;
}

Serializer::~Serializer(void)
{
	// std::cout << _name << "'s destructor called" << std::endl;
}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	// std::cout << "Serializer assignment operator called" << std::endl;

	(void)rhs;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
