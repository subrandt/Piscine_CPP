/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:37:00 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/01 14:36:06 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		~AMateria(void);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target); //manque la fonction dans le .cpp

		AMateria & operator=(AMateria const & rhs)

	protected:
		std::string _type;

	private:
};

std::ostream &operator<<(std::ostream & o AMateria const & i);

#endif