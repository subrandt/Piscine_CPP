/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:59:45 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/06 16:57:45 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:

		Form(std::string name, int _sign_grade, int exec_grade);
		Form(Form const & src);
		~Form(void);

		Form & operator=(Form const & rhs);
		
		const std::string 	getName(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		void	beSigned(Bureaucrat &bureaucrat); //set form to signed

		
	private:
		Form(void);

		const std::string 	_name;
		const int			_sign_grade;
		const int 			_exec_grade;
		bool 				_signed_form;

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
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif