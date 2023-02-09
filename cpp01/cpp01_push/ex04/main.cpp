/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:55:07 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/07 10:46:36 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace_in_file(char **argv, std::ifstream &file)
{
	std::string line;
	std::ofstream newfile;
	std::string filename = std::string(argv[1]) + ".replace";
	newfile.open(filename.c_str());
	std::string to_find = std::string(argv[2]);
	std::string replace_by = std::string(argv[3]);

	while(getline(file, line))
	{
		size_t pos = line.find(to_find);
		while(pos != std::string::npos)
		{
			line.erase(pos, to_find.length());
			line.insert(pos, replace_by.c_str());
			pos = line.find(to_find);
		}
		newfile << line << "\n";
	}
	newfile.close();
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return(1);
	}
	std::ifstream file;
	file.open(argv[1]);
	if (file.is_open())
	{
		replace_in_file(argv, file);
    }
	else
	{
		std::cout << "Error opening file" << std::endl;
	}
	file.close();
	return (0);
}
