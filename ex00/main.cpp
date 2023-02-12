/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:36:28 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/05 22:08:38 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"

//different zombies for different creation types:
//	-heap 1) in the main 2) with the function newZombie()
//	-stack	1) int the main 2) with the function randomChump()
int	main(void)
{
	Zombie	mumbo("Mumbo");
	mumbo.announce();

	randomChump("Grian");

	Zombie*	keralis = new Zombie("Keralis");
	keralis->announce();

	Zombie *scar = newZombie("Scar");
	scar->announce();

	delete	keralis;
	delete	scar;
	return (0);
}