/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:45:21 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/09 15:50:15 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

#define BLANK "\033[0m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELL "\033[0;33m"

void	check_errors(int arg_ammount, char **inputs)
{
	if (arg_ammount != 4)
	{
		std::cout << RED << "Incorrect amount of arguments!" << BLANK << std::endl;
		exit(1);
	}
	for (int i = 0; i < arg_ammount; i++)
	{
		if (((std::string)inputs[i]).empty())
		{
			std::cout << RED << "Argument: " << i << " is empty!" << BLANK << std::endl;
			exit(1);
		}
	}
}

void	read_and_copy(char **argv, std::ifstream& r_file, std::ofstream& o_file)
{
	std::string replace = argv[2];
	std::string for_replacing = argv[3];
	std::string	buffer;
	while (1)
	{
		getline(r_file, buffer);
		while (1)
		{
			size_t position = buffer.find(replace);
			if (position == std::string::npos)
				break;
			buffer.erase(position, replace.length());
			buffer.insert(position, for_replacing);
		}
		o_file << buffer;
		if (r_file.eof() == false)
			o_file << std::endl;
		else
			break;
	}
}

int	main(int argc, char **argv)
{
	check_errors(argc, argv);
	std::ifstream	read_file (argv[1]);
	std::string 	outputf_n = argv[1];
	outputf_n += ".replace";
	std::ofstream	output_file (outputf_n.c_str());

	if (read_file.is_open() == true && output_file.is_open() == true)
		read_and_copy(argv, read_file, output_file);
	else
	{
		std::cout << RED << "Error handling files:!" << std::endl;
		std::cout << "<1> Check if you have created a file with correct name!" << std::endl;
		std::cout << "<2> Filename should be second after executable name!" << std::endl;
		std::cout << "<3> If previous steps are correct and you do not see <name>.replace file,";
		std::cout << "then something went wrong while opening file! Good luck!" << BLANK << std::endl;
	}
	read_file.close();
	output_file.close();
	return (0);
}
