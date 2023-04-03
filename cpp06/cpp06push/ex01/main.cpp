/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:52:17 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/22 11:15:24 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data;
	data.nb = 42;
	data.str = "quarante-deux";
	
	std::cout << "\nData : " << std::endl;
	std::cout << data.nb << std::endl;
	std::cout << data.str << std::endl;

	uintptr_t ptr = Serializer::serialize(&data);
	Data *data2 = Serializer::deserialize(ptr);
	
	std::cout << "\nData after serialize/deserialize : " << std::endl;
	std::cout << data2->nb << std::endl;
	std::cout << data2->str << std::endl;

	return (0);
}