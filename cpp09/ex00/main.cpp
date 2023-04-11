/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:28:10 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/11 15:49:38 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>

// static bool open_inputfile(const char *inputfile)
// {
// 	std::fstream fs;

// 	fs.open(inputfile);
// 	if (!fs.is_open())
// 	{
// 		std::cerr << "Error opening inputfile" << std::endl;
// 		fs.close();
// 		return (false);
// 	}
// 	std::cout << "Inputfile successfully opened" << std::endl;
// 	return (true);
// }

// static bool open_database(void)
// {
// 	std::fstream fs;
// 	fs.open("data.csv");
// 	if (!fs.is_open())
// 	{
// 		std::cerr << "Error opening database" << std::endl;
// 		fs.close();
// 		return (false);
// 	}
// 	std::cout << "Database successfully opened" << std::endl;
// 	return (true);
// }

static void close_files(const char *inputfile)
{
	//close database
	std::fstream database ("data.csv");
	if (database.is_open())
	{
		database.close();
		std::cout << "Database successfully closed" << std::endl;
	}

	//close inputfile
	std::fstream fs (inputfile);

	if (fs.is_open())
	{
		fs.close();
		std::cout << "Inputfile successfully closed" << std::endl;
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
	
	close_files(argv[1]);//ne sert pas de fermer 

	return (0);
}