/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:28:10 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/18 17:52:47 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>

static void close_files(const char *inputfile)
{
	//close database
	std::fstream database ("data.csv");
	if (database.is_open())
	{
		database.close();
	}

	//close inputfile
	std::fstream fs (inputfile);

	if (fs.is_open())
	{
		fs.close();
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Enter 2 arguments:\n";
		std::cerr << "Usage: ./btc inputfile" << std::endl;
		return (1);
	}

	const std::string inputfile(argv[1]);
	Btc btc(inputfile);
	
	close_files(argv[1]);

	return (0);
}