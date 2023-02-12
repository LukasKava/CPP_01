/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:31:16 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/07 12:55:52 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB(std::string name);
	~HumanB(void);
	void	setWeapon(Weapon& weapon);
	void	attack(void);
};

#endif