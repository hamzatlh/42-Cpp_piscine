/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:32:20 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 20:52:34 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("hamza"), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): Name(name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	(*this) = old;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& old)
{
	std::cout << "ClapTrap copy assignement operator called" << std::endl;
	if (this != &old)
	{
		this->Name = old.Name;
		this->Hit_points = old.Hit_points;
		this->Energy_points = old.Energy_points;
		this->Attack_damage = old.Attack_damage;	
	}
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
			std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		}
	else
		std::cout << "ClapTrap " << this->Name << " can't attack " << target << ", because he has no energy points or hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points > 0 && this->Energy_points > 0)
		{
			std::cout << "ClapTrap " << this->Name << " take " << amount << " points of damage!" << std::endl;
			Hit_points -= amount;
		}
	else
		std::cout << "ClapTrap " << this->Name << " can't do nothing" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points > 0 && this->Hit_points > 0)
		{
			std::cout << "ClapTrap " << this->Name << " be repaired " << amount << " points of damage!" << std::endl;
			Hit_points += amount;
			Energy_points -= 1;
		}
	else
		std::cout << "ClapTrap " << this->Name << " can't do nothing" << std::endl;
}
