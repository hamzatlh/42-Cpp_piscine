/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:42:25 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/16 13:51:48 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
int main()
{
	try{
		ShrubberyCreationForm form("home");
		Bureaucrat b("b", 137);
		b.signForm(form);
		b.executeForm(form);

		// RobotomyRequestForm form2("home");
		// Bureaucrat b2("b", 50);
		// form2.beSigned(b2);
		// form2.execute(b2);

		// PresidentialPardonForm form3("home");
		// Bureaucrat b3("b", 5);
		// form3.beSigned(b3);
		// form3.execute(b3);

		// AForm *form4 = new ShrubberyCreationForm("home");
		// Bureaucrat b4("b", 90);
		// form4->beSigned(b4);
		// form4->beSigned(b4);
		
		// b4.executeForm(*form4);
		
		// delete form4;
		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}