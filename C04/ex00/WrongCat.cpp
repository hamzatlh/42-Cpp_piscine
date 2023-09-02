/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:52:51 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 10:17:27 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = "WrongCat";
}


WrongCat::WrongCat(const WrongCat& old)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = old;
}


WrongCat& WrongCat::operator=(const WrongCat& old)
{
	std::cout << "WrongCat Assignation operator called" << std::endl;
	this->type = old.type;
	return (*this);
}


WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}


void WrongCat::makeSound() const
{
	std::cout << "WrongCat makeSound called" << std::endl;
}
