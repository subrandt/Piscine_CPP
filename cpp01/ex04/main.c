/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:55:07 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/02 16:41:54 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		//message d'erreur sur la sortie d'erreur
		std::cerr << "Wrong number of arguments" << std::endl;
		return(1);
	}
	std::fstream file;
	file.open("filename"); //open a file to perform read operation using file object
	if (file.is_open()) //checking whether the file is open
	{
    	std::string tp;
    	while(getline(file, tp)){ //read data from file object and put it into string.
        	std::cout << tp << "\n"; //print the data of the string
		}
    }
    file.close(); //close the file object.
	
	//recuperer les args
	//ouvrir le fichier, lire ligne/ligne
	//puis remplacer s1 par s2
		//remplacer la fonction replace par :
		//erase
		//append
	return (0);
}
