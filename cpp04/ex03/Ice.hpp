/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:38:45 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/01 15:35:31 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice	(void);
		Ice(Ice const & src);
		~Ice(void);

		virtual AMateria *clone() const;
		virtual void use(ICharacter& target);

		Ice & operator=(Ice const & rhs);

	protected:

	private:
};

#endif