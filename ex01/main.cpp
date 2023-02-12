/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:28:52 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/06 14:33:25 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	zombieNames = "BOB";
	int			numberOfZombies = 100;
	Zombie		*hordOfZombies = zombieHorde(numberOfZombies, zombieNames);

	if (hordOfZombies == NULL)
		return (1);
	for (int i = 0; i < numberOfZombies; i++)
		hordOfZombies[i].announce();
	delete	[] hordOfZombies;
	return (0);
}