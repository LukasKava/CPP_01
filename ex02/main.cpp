/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:50:14 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/06 21:12:14 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define BLANK "\033[0m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"

int	main(void)
{
	std::string	n_string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &n_string;
	std::string	&stringREF = n_string;

	std::cout << "This is address of string: " << YELL << &n_string << BLANK << std::endl;
	std::cout << "This is address of stringPTR: " << RED << stringPTR << BLANK << std::endl;
	std::cout << "This is address of stringREF: " << GREEN << &stringREF << BLANK << std::endl;

	std::cout << "========================================" << std::endl;

	std::cout << "This is value of the string: " << YELL << n_string << BLANK << std::endl;
	std::cout << "This is value pointed to stringPTR: " << RED << *stringPTR << BLANK << std::endl;
	std::cout << "This is value pointed to stringREF: " << GREEN << stringREF << BLANK << std::endl;
	
	return (0);
}
