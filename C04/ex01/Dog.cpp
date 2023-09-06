/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:28:06 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/06 15:52:45 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog (const Dog& old)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = old;
}

// # include <stdio.h>

Dog& Dog::operator=(const Dog& old)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = old.type;
	// this->brain = 0x046495;
	printf("%p\n", brain);
	delete this->brain;
	this->brain = new Brain(*old.brain);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}
