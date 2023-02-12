/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:31:19 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/07 13:08:08 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main()
{
	//Case 1
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	//Case 2
	Weapon club1 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club1);
	jim.attack();
	club1.setType("some other type of club");
	jim.attack();

	//Case 3
	Weapon	superWeapon("Dumpling");
	HumanB	piko("Piko");
	piko.attack();
	piko.setWeapon(superWeapon);
	piko.attack();
	piko.setWeapon(club);
	piko.attack();
	return (0);
}