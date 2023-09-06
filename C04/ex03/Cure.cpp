/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:31:07 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/05 17:44:27 by htalhaou         ###   ########.fr       */
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
	(void)old;
	std::cout << "Cure assignation operator called" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
