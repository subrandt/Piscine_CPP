/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:09:36 by subrandt          #+#    #+#             */
/*   Updated: 2023/01/09 12:40:46 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		addEntry(void);
		void		searchEntry(void);
		void		displayAllContacts(void);
		void		displayOneContact(int display_index);
		std::string	resizeEntry(std::string entryToResize);

	private:
		Contact _contact[8];
		int		_nbEntries;
		int		_i;
};

#endif
