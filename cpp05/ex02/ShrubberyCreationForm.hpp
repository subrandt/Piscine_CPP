/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:49:14 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/07 12:19:21 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string name, int _sign_grade, int exec_grade, std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		void execute(Bureaucrat const & executor) const;

	private:
		ShrubberyCreationForm(void);
		//fct create file target
		//fct write ascii trees

};

#endif