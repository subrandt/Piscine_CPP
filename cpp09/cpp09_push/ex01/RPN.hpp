/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:47:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/20 11:00:01 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cstdlib>

class RPN
{
	public:
		RPN(void);
		RPN(RPN const & src);
		~RPN(void);
		
		void RPN_operation(std::string const & operation);

	private:
		RPN & operator=(RPN const & rhs);

		std::stack<float> _stack;
};

bool parsing(std::string const & argv);


#endif