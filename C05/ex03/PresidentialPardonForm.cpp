/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:44:42 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/11 17:27:30 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "Constructor called for PresidentialPardonForm"<< std::endl;
	this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	std::cout << "Constructor called for PresidentialPardonForm"<< std::endl;
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor called for PresidentialPardonForm"<< std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& old) {
	std::cout << "Copy constructor called for PresidentialPardonForm"<< std::endl;
	*this = old;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& old) {
	std::cout << "Assignment operator called for PresidentialPardonForm" << std::endl;
	if (this != &old) {
		this->target = old.target;
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSigned() && executor.getGrade() > this->getExecGrade())
		throw PresidentialPardonForm::GradeTooLowException();
	else
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}
