/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:20:04 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/06 15:26:43 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& old)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = old;
}

Brain& Brain::operator=(const Brain& old)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = old.ideas[i];
	}
	
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}
