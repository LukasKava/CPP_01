/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:29:33 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/06 14:35:03 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << RED << "Number of Zombies is incorrect!" << BLANK << std::endl;
		std::cout << RED << "Zombies like positive numbers!" << BLANK << std::endl;
		return (NULL);
	}
	Zombie *zombieGroup = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieGroup[i].giveName(name);
	return (zombieGroup);
}
