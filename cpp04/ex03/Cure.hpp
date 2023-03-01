/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:38:45 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/01 14:48:10 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure	(void);
		Cure(std::string const & type);
		Cure(Cure const & src);
		~Cure(void);

		std::string const & getType() const; //Returns the materia type
		virtual Cure* clone() const;//virtual???
		virtual void use(ICharacter& target); //manque la fonction dans le .cpp

		Cure & operator=(Cure const & rhs)

	protected:
		std::string _type;

	private:
};

std::ostream &operator<<(std::ostream & o Cure const & i);

#endif