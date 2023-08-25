/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:41:56 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/25 19:49:37 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->Hit_points = 2;
	this->Energy_points = 2;
	this->Attack_damage = 2;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap (name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	// this->name = name;
	this->Hit_points = 2;
	this->Energy_points = 2;
	this->Attack_damage = 2;
}

ScavTrap::ScavTrap(ScavTrap const& old)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	(*this) = old;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& old)
{
	std::cout << "ScavTrap Assignement operator called" << std::endl;
	this->name = old.name;
	this->Hit_points = old.Hit_points;
	this->Energy_points = old.Energy_points;
	this->Attack_damage = old.Attack_damage;
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
			std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Hit_points << " points of damage!" << std::endl;
		}
	else
		std::cout << "ScavTrap " << this->name << " can't attack " << target << ", because he has no energy points or hit points!" << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now Gate keeper mode" << std::endl;
}