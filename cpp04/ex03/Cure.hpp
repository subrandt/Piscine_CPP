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

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure	(void);
		Cure(Cure const & src);
		~Cure(void);

		virtual AMateria *clone(void) const;
		virtual void use(ICharacter& target);

		Cure & operator=(Cure const & rhs);

	protected:

	private:
};

#endif