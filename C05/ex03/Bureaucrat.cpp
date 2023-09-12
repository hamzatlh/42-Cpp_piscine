/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:11:34 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/11 17:48:14 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("defalut")
{
	std::cout << "default constructer" << std::endl;
	this->grade = 150;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "destructer" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int Grade) : name(name)
{
	std::cout << "constructer name" << std::endl;
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = Grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat& old)
{
	std::cout << "copy constructer" << std::endl;
	if (this == &old)
		return ;
	*this = old;
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& old)
{
	std::cout << "assignation" << std::endl;
	if (this == &old)
		return (*this);
	this->grade = old.grade;
	return (*this);
}


std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void Bureaucrat::incrementGrade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

void Bureaucrat::signForm(AForm& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << f.getName() << " signed " << this->getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << f.getName() << " couldn't sign " << this->getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const& form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
