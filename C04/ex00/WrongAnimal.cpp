/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:53:20 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 10:11:04 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& old)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = old;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& old)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	this->type = old.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
