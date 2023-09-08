/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:28:06 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/08 11:21:34 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog (const Dog& old) : Animal(old)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = old;
}

Dog& Dog::operator=(const Dog& old)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &old)
		this->type = old.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}
