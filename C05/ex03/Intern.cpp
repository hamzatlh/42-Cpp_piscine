/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:43:04 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/12 17:53:17 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const& old)
{
	*this = old;
}

Intern & Intern::operator=(Intern const& old)
{
	(void)old;
	return *this;
}


Intern::~Intern()
{
}


AForm * Intern::makeForm(std::string name, std::string target)
{
	AForm *form = NULL;
	std::string levels[4] = {"robotomy request", "ShrubberyCreationForm", "PresidentialPardonForm"};
	int i; 
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == name)
			break;
	}
	switch (i)
	{
		case 0:
			form = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << target << std::endl;
			break;
		case 1:
			form = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << target << std::endl;
			break;
		case 2 :
			form = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << target << std::endl;
			break;
		default:
			std::cout << "Form not found" << std::endl;
	}
	return (form);
}