
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "Default MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    std::cout << "MateriaSource assignement operator called" << std::endl;
	
    
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Default MateriaSource destructor called" << std::endl;
}

// void MateriaSource::learnMateria(AMateria*)
// {

// }

// AMateria *MateriaSource::createMateria(std::string const & type)
// {

// }