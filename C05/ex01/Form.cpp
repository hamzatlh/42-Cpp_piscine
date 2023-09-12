/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:17:58 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/11 11:30:46 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), Signed(false), gradeToSign(150), gradeToExecute(150)
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), Signed(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
}

Form::~Form()
{
}

Form::Form(const Form& old) : name(old.name), Signed(old.Signed), gradeToSign(old.gradeToSign), gradeToExecute(old.gradeToExecute)
{
}

Form& Form::operator=(const Form& old)
{
	if (this == &old)
		return (*this);
	this->Signed = old.Signed;
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSigned() const
{
	return (this->Signed);
}

int Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int Form::getGradeToExucute() const
{
	return (this->gradeToExecute);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << "Form name : " << f.getName() << " Signed : " << f.getSigned() << " gradeToSign : " << f.getGradeToSign() << " gradeToExecute : " << f.getGradeToExucute() << std::endl;
	return (os);
}

void Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	this->Signed = true;
}
