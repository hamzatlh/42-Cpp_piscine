/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:32:20 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/01 12:48:39 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = "hamza";
}

ClapTrap::ClapTrap(std::string name): Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap& old)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	(*this) = old;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& old)
{
	std::cout << "ClapTrap copy assignement operator called" << std::endl;
	this->name = old.name;
	this->Hit_points = old.Hit_points;
	this->Energy_points = old.Energy_points;
	this->Attack_damage = old.Attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Hit_points > 0 && this->Energy_points > 0)
		{
			Energy_points -= 1;
			std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		}
	else
		std::cout << "ClapTrap " << this->name << " can't attack " << target << ", because he has no energy points or hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points > 0 && this->Energy_points > 0)
		{
			std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
			Hit_points -= amount;
		}
	else
		std::cout << "ClapTrap " << this->name << " can't do nothing" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points > 0 && this->Hit_points > 0)
		{
			std::cout << "ClapTrap " << this->name << " be repaired " << amount << " points of damage!" << std::endl;
			Hit_points += amount;
			Energy_points -= 1;
		}
	else
		std::cout << "ClapTrap " << this->name << " can't do nothing" << std::endl;
}

// std::string ClapTrap::get_name()
// {
// 	return (this->name);
// }

int ClapTrap::get_hit_points()
{
	return (this->Hit_points);
}

int ClapTrap::get_energy_points()
{
	return (this->Energy_points);
}

int ClapTrap::get_attack_damage()
{
	return (this->Attack_damage);
}
