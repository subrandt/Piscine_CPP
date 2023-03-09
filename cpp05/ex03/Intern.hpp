/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:48:47 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/09 17:03:27 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

class Intern
{
	public:

		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern & operator=(Intern const & rhs);

		Form & 	makeForm(std::string form_name, std::string target);


	private:

};

// std::ostream & operator<<(std::ostream & o, Intern const & rhs);

#endif