/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:21:55 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 19:39:33 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& old)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = old;
}

AAnimal& AAnimal::operator=(const AAnimal& old)
{
	std::cout << "AAnimal Assignation operator called" << std::endl;
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

