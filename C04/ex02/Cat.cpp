/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:44:51 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 13:38:24 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat (const Cat& old)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = old;
}

Cat& Cat::operator=(const Cat& old)
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = old.type;
	this->brain = new Brain(*old.brain);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}
