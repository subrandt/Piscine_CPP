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

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		virtual Character();
		virtual Character(Character const & src);
		virtual operator=(Character const & rhs);
		virtual ~Character() {}
		virtual std::string const & getName() const; //ecrire getName
		virtual void equip(ICharacter* m); //manque
		virtual void unequip(int idx);		//manque
		virtual void use(int idx, Character& target); //manque
	
	protected:
		std::string _name;
};

#endif