/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:59:55 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/06 16:45:10 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}


FragTrap::FragTrap(std::string name) : ClapTrap (name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const& old) : ClapTrap (old)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	(*this) = old;
}

FragTrap& FragTrap::operator=(FragTrap const& old)
{
	std::cout << "FragTrap Assignement operator called" << std::endl;
	this->Name = old.Name;
	this->Hit_points = old.Hit_points;
	this->Energy_points = old.Energy_points;
	this->Attack_damage = old.Attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}


void FragTrap::attack(const std::string& target)
{
	if (this->Hit_points > 0 && this->Energy_points > 0)
		{
			Energy_points -= 1;
			std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->Hit_points << " points of damage!" << std::endl;
		}
	else
		std::cout << "FragTrap " << this->Name << " can't attack " << target << ", because he has no energy points or hit points!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap wants a positive high five" << std::endl;
}