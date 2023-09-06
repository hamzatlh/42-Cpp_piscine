/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:30:45 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/05 18:56:06 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const& type) : AMateria(type)
{
	std::cout << "Ice type constructor called" << std::endl;
}

Ice::Ice(const Ice& old) : AMateria(old)
{
	std::cout << "Ice copy constructor called" << std::endl;
	(*this) = old;
}

Ice& Ice::operator=(const Ice& old)
{
	(void)old;
	std::cout << "Ice assignation operator called" << std::endl;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

