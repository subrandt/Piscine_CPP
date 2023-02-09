/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:33:01 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/06 13:49:47 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		std::string	getType() const;//retourne une référence constante sur type
		void	setType(std::string type);//attribue à type la nouvelle valeur passée en paramètre

	private:
		std::string	_type;
};

#endif