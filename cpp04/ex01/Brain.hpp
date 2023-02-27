/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:55:03 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/27 15:31:23 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & copy);
		~Brain(void);
		
		
		std::string *getIdeas(void);
		Brain & operator=(Brain const & rhs);

	protected:

	private:
		std::string _ideas[100];

};

#endif
