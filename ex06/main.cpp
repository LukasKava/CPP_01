/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:12:09 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/09 20:19:09 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Incorrect amount of arguments!" << BLANK << std::endl;
		return (1);
	}
	Harl		harl_complains;

	harl_complains.complain(argv[1]);
	return (0);
}