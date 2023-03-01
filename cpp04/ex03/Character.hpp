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

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string &name);
		Character(Character const & src);
		Character &operator=(Character const & rhs);
		virtual ~Character() {}

		virtual std::string const & getName() const;
		// virtual void equip(ICharacter* m);
		// virtual void unequip(int idx);
		// virtual void use(int idx, Character& target);
	
	protected:
		std::string _name;
};

#endif