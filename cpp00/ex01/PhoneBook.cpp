/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:08:47 by subrandt          #+#    #+#             */
/*   Updated: 2023/01/09 18:12:27 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome to My Awesome PhoneBook." << std::endl;
	PhoneBook::_nbEntries = 0;
	PhoneBook::_i = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Bye bye... see you soon!" << std::endl;
	return ;
}

void	PhoneBook::addEntry(void)
{
	std::string	tmp;

	if (_nbEntries > 7)
	{
		std::cout << "By adding the next contact you will" << std::endl;
		std::cout << "replace the oldest one by the new one." << std::endl;
		if (_i == 8)
			_i = 0;
	}

	do
	{
		std::cout << "First Name: ";
		std::getline(std::cin, tmp);
		_contact[_nbEntries % 8].setFirstName(tmp);
	}while (tmp.empty());
	do
	{
		std::cout << "Last Name: ";
		std::getline(std::cin, tmp);
		_contact[_nbEntries % 8].setLastName(tmp);
	}while (tmp.empty());
	do
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, tmp);
		_contact[_nbEntries % 8].setNickname(tmp);
	}while (tmp.empty());
	do
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, tmp);
		//fct checkPhoneNumber - only digits ...?
		_contact[_nbEntries % 8].setPhoneNumber(tmp);
	}while (tmp.empty());
	do
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, tmp);
		_contact[_nbEntries % 8].setDarkestSecret(tmp);
	}while (tmp.empty());
	_nbEntries++;
	_i++;
}

std::string	PhoneBook::resizeEntry(std::string entryToResize)
{
	std::string	resizedEntry;

	if (entryToResize.length() > 10)
		{
			resizedEntry = entryToResize;
			resizedEntry.resize(9);
			std::cout << resizedEntry << std::endl;
			resizedEntry = resizedEntry + ".";
			std::cout << resizedEntry << std::endl;
		}
	else
		resizedEntry = entryToResize;
	return(resizedEntry);
}

void	PhoneBook::displayAllContacts(void)
{
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	
	//faire une copie du tableau si length > 10
	//str.resize(9) + "." sur la copie
	for (int i = 0; (i < _nbEntries && i < 8); i++)
	{
		std::string tmp;
		std::cout <<"|         " << i << "|";
		std::cout << std::setw(10);
		tmp = PhoneBook::resizeEntry(_contact[i].getFirstName());
		std::cout << tmp /*_contact[i].getFirstName()*/ << "|";
		std::cout << std::setw(10);
		std::cout << _contact[i].getLastName() << "|";
		std::cout << std::setw(10);
		std::cout << _contact[i].getNickname() << "|";
		std::cout << std::endl;
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

void	PhoneBook::searchEntry(void)
{
	std::string search_index;
	
	PhoneBook::displayAllContacts();
	std::cout << std::endl;
	std::cout << "Enter the INDEX of the contact to display: ";
	std::getline(std::cin, search_index); //parsing sur search_index 0-7
	if ((search_index.length() < 1 || search_index.length() > 1))
	{
		std::cout << "Enter only one digit between 0 and " << (_nbEntries - 1) << std::endl;
		searchEntry();
	}
	//if ()//only digits
	if (atoi(search_index.c_str()) < 0
		|| (atoi(search_index.c_str()) > (_nbEntries - 1)))
	{
		std::cout << "Enter a digit between 0 and " << (_nbEntries - 1) << std::endl;
		searchEntry();
	}
	else
		PhoneBook::displayOneContact(atoi(search_index.c_str()));
}

void	PhoneBook::displayOneContact(int display_index)
{
	int	i = 0;

	while (i < display_index)
		i++;
	std::cout << "First Name: ";
	std::cout << _contact[i].getFirstName() << std::endl;
	std::cout << "Last Name: ";
	std::cout << _contact[i].getLastName() << std::endl;
	std::cout << "Nickname: ";
	std::cout << _contact[i].getNickname() << std::endl;
	std::cout << "Phone Number: ";
	std::cout << _contact[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << _contact[i].getDarkestSecret() << std::endl;
}
