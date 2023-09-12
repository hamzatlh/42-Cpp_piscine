/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:43:14 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/12 16:43:50 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("defautl"), Signed(false), gradeToSign(150), gradeToExecute(150)
{
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), Signed(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
}

AForm::AForm(AForm const& old) : name(old.name), Signed(old.Signed), gradeToSign(old.gradeToSign), gradeToExecute(old.gradeToExecute)
{
}

AForm& AForm::operator=(AForm const& old)
{
	if (this != &old)
		this->Signed = old.Signed;
	return *this;
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSigned() const
{
	return (this->Signed);
}

int AForm::getSignGrade() const
{
	return (this->gradeToSign);
}

int AForm::getExecGrade() const
{
	return (this->gradeToExecute);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

void AForm::beSigned(Bureaucrat& b)
{
	if (b.getGrade() >= this->gradeToSign)
		throw AForm::GradeTooLowException();
	this->Signed = true;
}

std::ostream & operator<<(std::ostream& o, AForm const& f)
{
	o << f.getName() << " is " << f.getSigned() << " and require grade " << f.getSignGrade() << " to be signed and " << f.getExecGrade() << " to be executed";
	return o;
}