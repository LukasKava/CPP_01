/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:12:23 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/10 12:32:11 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void	Harl::complain(std::string level)
{
	int			i = 0 ;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*ptr_m[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	while (levels[i] != level && i < 4)
		i++;
	switch (i)
	{
		case (0):
			while (i < 4)
			{
				(this->*ptr_m[i])();
				i++;
			}
			break;
		case (1):
			while (i < 4)
			{
				(this->*ptr_m[i])();
				i++;
			}
			break;
		case (2):
			while (i < 4)
			{
				(this->*ptr_m[i])();
				i++;
			}
			break;
		case (3):
			while (i < 4)
			{
				(this->*ptr_m[i])();
				i++;
			}
			break;
		default:
			std::cout << RED << "Inputed level is incorrect!" << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << GREEN << "[DEBUG] " << BLANK;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << CYAN << "[INFO] " << BLANK;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELL << "[WARNING] " << BLANK;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "[ERROR] " << BLANK;
	std::cout << "This is unacceptable! I want to speak to the manager NOW!";
	std::cout << std::endl;
}
