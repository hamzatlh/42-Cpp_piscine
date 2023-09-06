/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:50:21 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/06 15:05:43 by htalhaou         ###   ########.fr       */
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
	*this = old;
}

Character& Character::operator=(const Character& old)
{
    std::cout << "Character assignment operator called" << std::endl;
    if (this == &old)
        return *this;
    this->Name = old.Name;
	// this->Scount = old.Scount;

    for (int i = 0; i < 4; i++)
	{
        delete this->Inventory[i];
		// delete this->temp[i];
	}
	// int i = 0;
	// while (i < INT_MAX)
	// {
	// 	// this->temp[i] = NULL;
	// 	delete this->temp[i];
	// 	i++;
	// }
    for (int i = 0; i < 4; i++)
	{
        if (old.Inventory[i] != NULL)
			{
				this->Inventory[i] = old.Inventory[i]->clone();
				// this->temp[i] = old.temp[i]->clone();
			}
	}
	// i = 0;
	// while (i < INT_MAX)
	// {
	// 	// this->temp[i] = NULL;
	// 	if (old.temp[i] != NULL)
	// 		this->temp[i] = old.temp[i]->clone();
	// 	i++;
	// }
    return (*this);
}


Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
	{
		if(this->Inventory[i])
		{
			delete (this->Inventory[i]);
			// delete (this->temp[i]);
		}
	}
	// int i = 0;
	// while (i < INT_MAX)
	// {
	// 	if(this->temp[i])
	// 		delete (this->temp[i]);
	// 	i++;
	// }
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
	// freeAllocation();
	if ((idx >= 0 && idx < 4) && this->Inventory[idx] != NULL)
	{
		// temp[Scount++] = this->Inventory[idx];
		// temp[Scount] = NULL;
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
	{
		Inventory[idx]->use(target);
	}
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
