/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:32:21 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/09 14:12:42 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl Harl;
	std::cout << "Harl is complaining a lot at different levels: " << std::endl;
	std::cout << std::endl;
	std::cout << "level 1: " << std::endl;
	Harl.complain("DEBUG");
	std::cout << "level 2: " << std::endl;
	Harl.complain("INFO");
	std::cout << "level 3: " << std::endl;
	Harl.complain("WARNING");
	std::cout << "level 4: " << std::endl;
	Harl.complain("ERROR");
	std::cout << "others: " << std::endl;
	Harl.complain("XYZ");


    return (0);
}