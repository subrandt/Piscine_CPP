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

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice	(void);
		Ice(std::string const & type);
		Ice(Ice const & src);
		~Ice(void);

		std::string const & getType() const; //Returns the materia type
		virtual Ice* clone() const;//virtual???
		virtual void use(ICharacter& target); //manque la fonction dans le .cpp

		Ice & operator=(Ice const & rhs)

	protected:
		std::string _type;

	private:
};

std::ostream &operator<<(std::ostream & o Ice const & i);

#endif