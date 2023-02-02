/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:19:22 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/02 16:43:29 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#ifndef REPLACE_HPP
# define REPLACE_HPP

class	Replace
{
	public:
		Replace(void);
		~Replace(void);
		std::string	s1;
		std::string s2;
	private:
};

#endif