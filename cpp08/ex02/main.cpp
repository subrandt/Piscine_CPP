/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:44:22 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/06 08:36:05 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main (void)
{
	std::cout << "\ncreate stack with integers:" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	std::cout << mstack.top() << std::endl;
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.push(3);
	std::cout << mstack.top() << std::endl;
	mstack.push(5);
	std::cout << mstack.top() << std::endl;
	mstack.push(737);
	std::cout << mstack.top() << std::endl;
	mstack.push(0);
	std::cout << mstack.top() << std::endl;
	
	std::cout << "\npop out the top element, new top element:" << std::endl;
	mstack.pop();
	std::cout << mstack.top() << std::endl;
	std::cout << "\nsize of the stack: " << std::endl;
	std::cout << mstack.size() << std::endl;

	std::cout << "\ncreating iterators and print stack mstack:" << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\ncopying stack, print top element:" << std::endl;
	std::stack<int> s(mstack);
	std::cout << s.top() << std::endl;

	std::cout << "\n\ncreate stack with strings:" << std::endl;
	MutantStack<const char *> cstack;
	cstack.push("coucou");
	std::cout << cstack.top() << std::endl;
	cstack.push("bonjour");
	std::cout << cstack.top() << std::endl;
	cstack.push("hello");
	std::cout << cstack.top() << std::endl;
	std::cout << "\nsize of the stack: " << std::endl;
	std::cout << cstack.size() << std::endl;
	
	return (0);
}