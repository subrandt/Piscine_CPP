/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:55:03 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/23 12:52:26 by subrandt         ###   ########.fr       */
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

		std::string	getIdeas(void) const;
		void setIdeas(std::string const ideas);
		
		Brain & operator=(Brain const & rhs);

	protected:

	private:
		std::string _ideas[100];

};

std::ostream &operator<<(std::ostream &o, Brain const & i)

#endif
