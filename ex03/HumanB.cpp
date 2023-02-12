/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:31:12 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/07 13:09:06 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	std::cout << "HumanB constructor" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destructor" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << GREEN << _name << " attacks with their ";
	std::cout << (_weapon==NULL?"sock":_weapon->getType()) << BLANK << std::endl;
}