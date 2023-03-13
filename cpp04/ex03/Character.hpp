/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:03:29 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/01 14:20:58 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria;

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(Character const & src);
		Character &operator=(Character const & rhs);
		virtual ~Character();

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	
	protected:
		std::string _name;
		AMateria *_inventory[4];
};

#endif