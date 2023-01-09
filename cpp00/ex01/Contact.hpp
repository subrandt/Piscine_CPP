/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:25:06 by subrandt          #+#    #+#             */
/*   Updated: 2023/01/06 10:26:42 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	public:
		void setFirstName(std::string firstName);
		std::string getFirstName() const;
		void setLastName(std::string lastName);
		std::string getLastName() const;
		void setNickname(std::string nickname);
		std::string getNickname() const;
		void setPhoneNumber(std::string phoneNumber);
		std::string getPhoneNumber() const;
		void setDarkestSecret(std::string darkestSecret);
		std::string getDarkestSecret() const;
		
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		
};
#endif
