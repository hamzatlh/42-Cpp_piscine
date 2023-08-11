/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:22:31 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/11 11:49:28 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "hamza";
}

Zombie::~Zombie()
{
    std::cout << this->name << " " << "destroyed" << std::endl;
}


void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName(void)
{
	return (this->name);
}



