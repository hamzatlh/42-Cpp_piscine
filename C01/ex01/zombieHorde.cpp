/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:07:10 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/11 12:45:46 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombies = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		zombies[i].setName(name);
		i++;
	}
	return (zombies);
}
