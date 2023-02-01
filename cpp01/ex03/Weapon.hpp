
#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class	Weapon
{
	public:
		Weapon(void);//constructeur par default
		Weapon(std::string type);//constructeur Weapon_type
		~Weapon(void);
		std::string	getType() const;//retourne une référence constante sur type
		void	setType(std::string type);//attribue à type la nouvelle valeur passée en paramètre

	private:
		std::string	_type;
};

#endif