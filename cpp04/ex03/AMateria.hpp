/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:37:00 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/13 16:04:01 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		AMateria &operator=(AMateria const & rhs);
		virtual ~AMateria(void);

		std::string 		const & getType() const;
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target) = 0;

	protected:
		std::string _type;

	private:
};

#endif