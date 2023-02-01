
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Default constructor Weapon called" << std::endl;
	return ;
}

Weapon::Weapon(std::string type)
{
	std::cout << std::endl;
	std::cout << "Constructor Weapon called" << std::endl;
	this->_type = type;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor Weapon called" << std::endl;
	return ;
}

std::string	Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
