/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:11:10 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/06 16:23:55 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class	Harl
{
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);

	private:
		void  (Harl::*_complain_level[4])(void);
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif