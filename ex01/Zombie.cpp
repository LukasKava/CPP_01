/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:29:25 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/06 21:02:21 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie was created!" << std::endl;
};

Zombie::~Zombie(void)
{
	std::cout << RED << "Zombie " << _name << " has been killed!" << BLANK << std::endl;
};

void Zombie::announce(void)
{
	std::cout << GREEN <<  _name << ": annouces himself: I am Alive!" << BLANK << std::endl;
}

void Zombie::giveName(std::string name)
{
	this->_name = name;
}
