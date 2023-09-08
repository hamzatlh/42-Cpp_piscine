/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:55:15 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/08 11:46:41 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
	this->type = "default";
}

AMateria::AMateria(std::string const& type)
{
	std::cout << "AMateria type constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria& old)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = old;
}

AMateria& AMateria::operator=(const AMateria& old)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &old)
		this->type = old.type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const& AMateria::getType() const
{
	return (this->type);
}


void AMateria::setType(std::string const& type)
{
	this->type = type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

