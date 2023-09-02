/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:41:56 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 20:54:37 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->Name = name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const& old) : ClapTrap(old)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& old)
{
	std::cout << "ScavTrap Assignement operator called" << std::endl;
	if (this != &old)
	{
		this->Name = old.Name;
		this->Hit_points = old.Hit_points;
		this->Energy_points = old.Energy_points;
		this->Attack_damage = old.Attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
	if (this->Hit_points > 0 && this->Energy_points > 0)
		{
			Energy_points -= 1;
			std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->Hit_points << " points of damage!" << std::endl;
		}
	else
		std::cout << "ScavTrap " << this->Name << " can't attack " << target << ", because he has no energy points or hit points!" << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now Gate keeper mode" << std::endl;
}