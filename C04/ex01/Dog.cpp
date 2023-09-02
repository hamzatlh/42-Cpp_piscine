/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:28:06 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 13:38:48 by htalhaou         ###   ########.fr       */
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

Dog& Dog::operator=(const Dog& old)
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->type = old.type;
	this->brain = new Brain(*old.brain);;
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
