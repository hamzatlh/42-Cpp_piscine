/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:21:52 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/08 12:00:44 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& old)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = old.materias[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource const& old)
{
	std::cout << "MateriaSource assignation operator called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = old.materias[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->materias[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = m;
			return ;
		}
		if (i == 3)
			delete m;
	}
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] && this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	}
	return (NULL);
}