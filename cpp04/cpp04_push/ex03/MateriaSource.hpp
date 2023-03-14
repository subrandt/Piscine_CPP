/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:21:52 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/13 16:13:22 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		MateriaSource &operator=(MateriaSource const & rhs);
		~MateriaSource(void);
		
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
	
	private:
		AMateria *_materias[4];
};

#endif