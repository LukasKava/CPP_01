/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:29:29 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/06 21:02:42 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <new>

# define BLANK "\033[0m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	~Zombie(void);
	void	giveName(std::string name);
	void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);


#endif