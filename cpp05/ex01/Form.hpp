/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:59:45 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/03 18:14:57 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
	public:

		Form(void);
		Form(std::string name, int _sign_grade);
		Form(Form const & src);
		~Form(void);

		Form & operator=(Form const & rhs);

		
	private:
		const std::string 	_name;
		const int			_grade;
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