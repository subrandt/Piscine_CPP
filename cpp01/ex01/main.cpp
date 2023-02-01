/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:00:02 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/01 11:54:33 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N;

	N = 3;
	Zombie* horde = zombieHorde(N, "Moron");
	for(int i = 0; i < N; i++)
	{
		horde->announce();
	}
	delete[] horde;
	std::cout << N << " zombies destroyed" << std::endl;

	return (0);
}
