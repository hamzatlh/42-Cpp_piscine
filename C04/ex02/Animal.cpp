/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:21:55 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/08 15:52:44 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal Default constructor called" << std::endl;
	this->type = "Animal";
}

AAnimal::AAnimal(const AAnimal& old)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = old;
}

AAnimal& AAnimal::operator=(const AAnimal& old)
{
	std::cout << "AAnimal Assignation operator called" << std::endl;
	if (this != &old)
		type = old.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
	return (type);
}

