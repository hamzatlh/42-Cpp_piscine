/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:06:27 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/11 12:37:12 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies = zombieHorde(5, "hamza");
	int i = 0;
	while (i < 5)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
	return (0);
}
