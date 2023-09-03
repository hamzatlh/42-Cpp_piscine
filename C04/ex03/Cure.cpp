/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:31:07 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/03 20:46:38 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const& type) : AMateria(type)
{
	std::cout << "Cure type constructor called" << std::endl;
}

Cure::Cure(const Cure& old) : AMateria(old)
{
	std::cout << "Cure copy constructor called" << std::endl;
	(*this) = old;
}

Cure& Cure::operator=(const Cure& old)
{
	std::cout << "Cure assignation operator called" << std::endl;
	return (*this);
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}


