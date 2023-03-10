/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:59:45 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/07 08:57:08 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:

		AForm(void);
		AForm(std::string name, int _sign_grade, int exec_grade);
		AForm(AForm const & src);
		virtual ~AForm(void);

		AForm & operator=(AForm const & rhs);
		
		const std::string 	getName(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		bool				getSignedForm(void) const;
		void				beSigned(Bureaucrat &bureaucrat);
		virtual void 		execute(Bureaucrat const & executor) const = 0;
		const std::string	getTarget(void) const;

	protected:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	
	private:

		const std::string 	_name;
		const int			_sign_grade;
		const int 			_exec_grade;
		bool 				_signed_form;
		const std::string	_target;

};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif