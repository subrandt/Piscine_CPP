/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:53:22 by subrandt          #+#    #+#             */
/*   Updated: 2023/01/06 14:33:49 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	PhoneBook;
	Contact		Contact;

	std::string	entry;
	while(entry.compare("EXIT") != 0)
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, entry);
		if (entry.compare("ADD") == 0)
		{
			std::cout << "You can now add a new contact" << std::endl;
			PhoneBook.addEntry();
		}
		if (entry.compare("SEARCH") == 0)
		{
			std::cout << "You can now search a contact in the following list:" << std::endl;
			PhoneBook.searchEntry();
		}
		else if ((entry.compare("ADD") != 0)
		&& (entry.compare("SEARCH") != 0)
		&& (entry.compare("EXIT") != 0))
		{
			std::cout << "You have the choice between the following commands: " << std::endl;
			std::cout << "ADD, SEARCH or EXIT" << std::endl;
		}
	}
	return (0);
}
