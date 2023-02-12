/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:04:27 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/07 12:48:16 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "Weapon constructor!" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor!" << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}
