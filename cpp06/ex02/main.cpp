/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:41:11 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/22 16:14:41 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

void identify(Base& p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "by reference: object of type A identified" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "by reference: object of type B identified" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "by reference: object of type C identified" << std::endl;
	}
	catch (std::exception &e) {}
}

void identify(Base* p)
{
	A *a = dynamic_cast<A *>(p);
	if (a != NULL)
	{
		std::cout << "by pointer: object of type A identified" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B *>(p);
	if (b != NULL)
	{
		std::cout << "by pointer: object of type B identified" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "by pointer: object of type C identified" << std::endl;
}

Base * generate(void)
{
    srand(time(NULL));
   
    int r = rand()%3;

    if (r == 0)
        return (new A);
    if(r == 1)
		return (new B);
	else
        return (new C);
	
}

int main(void)
{
	Base * base = generate();
	identify(base);
	identify(*base);
	return (0);
}