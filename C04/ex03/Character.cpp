/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:50:21 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/08 10:21:50 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	this->Name = "default";
	for(int i = 0; i < 4; i++)
	{
		this->Inventory[i] = NULL;
		this->tmp[i] = false;
	}
}

Character::Character(std::string const& name)
{
	std::cout << "Character type constructor called" << std::endl;
	this->Name = name;
	for(int i = 0; i < 4; i++)
	{
		this->Inventory[i] = NULL;
		this->tmp[i] = false;
	}
}

Character::Character(const Character& old)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
        this->Inventory[i] = NULL;
	*this = old;
}

Character& Character::operator=(const Character& old)
{
    std::cout << "Character assignment operator called" << std::endl;
    if (this == &old)
        return *this;
    this->Name = old.Name;
    for (int i = 0; i < 4; i++)
	{
		if(this->Inventory[i])
		{
			delete this->Inventory[i];
			this->Inventory[i] = NULL;
		}
	}
    for (int i = 0; i < 4; i++)
	{
        if (old.Inventory[i])
		{
			this->Inventory[i] = old.Inventory[i]->clone();
			this->tmp[i] = old.tmp[i];
		}
	}
    return (*this);
}


Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
	{
		if(this->Inventory[i])
			delete (this->Inventory[i]);
	}
}


void Character::equip(AMateria* m)
{
	freeAllocation();
	int i = 0;
	while (i < 4)
	{
		if (this->Inventory[i] == NULL)
		{
			this->Inventory[i] = m;
			return ;
		}
		else if (i == 3)
			delete m;
		i++;
	}
}

void Character::unequip(int idx)
{
	if ((idx >= 0 && idx < 4) && this->Inventory[idx] != NULL)
	{
		// this->Inventory[idx] = NULL;
		this->tmp[idx] = true;
	}
}


void Character::use(int idx, ICharacter& target)
{
	freeAllocation();
	if (idx < 0 || idx > 3)
		return ; 
	if (Inventory[idx])
		Inventory[idx]->use(target);
}

std::string const& Character::getName() const
{
	return (this->Name);
}


void Character::freeAllocation(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->tmp[i] == 1)
		{
			delete  this->Inventory[i];
			this->Inventory[i] = NULL;
			this->tmp[i] = false;
		}
	}
}
