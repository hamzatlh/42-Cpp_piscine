/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:42:54 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/12 14:41:26 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



class AForm;

class Intern
{
	private:

	public:
		Intern();
		Intern(std::string name);
		Intern(Intern const& src );
		~Intern();
		Intern& operator=(Intern const& old);
		AForm *makeForm(std::string name, std::string target);
};

#endif