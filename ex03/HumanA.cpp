/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:30:38 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/07 12:41:17 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &givenWeapon): _name(name), _weapon(givenWeapon)
{
	std::cout << "HumanA constructor!" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destructor!" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << RED << _name << "attacks with their " << _weapon.getType() << BLANK << std::endl;
}
