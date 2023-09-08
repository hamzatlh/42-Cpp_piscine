/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:28:06 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/08 11:15:35 by htalhaou         ###   ########.fr       */
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
	this->brain = new Brain();
	(*this) = old;
}

Dog& Dog::operator=(const Dog& old)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &old)
	{
		delete this->brain;
		this->type = old.type;
		if (old.brain)
            this->brain = new Brain(*old.brain);
	}
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
