/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:44:15 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/11 17:24:51 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "Constructor called for RobotomyRequestForm"<< std::endl;
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	std::cout << "Constructor called for RobotomyRequestForm"<< std::endl;
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor called for RobotomyRequestForm"<< std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& old) {
	std::cout << "Copy constructor called for RobotomyRequestForm"<< std::endl;
	*this = old;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& old) {
	std::cout << "Assignment operator called for RobotomyRequestForm" << std::endl;
	if (this != &old) {
		this->target = old.target;
	}
	return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSigned() && executor.getGrade() > this->getExecGrade())
		throw RobotomyRequestForm::GradeTooLowException();
	else
	{
		if (rand() % 2 == 0)
			std::cout << this->target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Robotomy failed for " << this->target << "." << std::endl;
	}
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}