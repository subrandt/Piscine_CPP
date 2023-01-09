/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:02:14 by subrandt          #+#    #+#             */
/*   Updated: 2023/01/06 10:40:46 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::setFirstName(std::string firstName)
{
    _firstName = firstName;
}

std::string Contact::getFirstName() const
{
    return (_firstName);
}

void Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

std::string Contact::getLastName() const
{
	return (_lastName);
}

void Contact::setNickname(std::string nickname)
{
	_nickname = nickname;
}

std::string Contact::getNickname() const
{
	return (_nickname);
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

std::string Contact::getPhoneNumber() const
{
	return (_phoneNumber);
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string Contact::getDarkestSecret() const
{
	return (_darkestSecret);
}
