/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:00:49 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/11 19:01:01 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
{
    std::cout << "Constructor called for ShrubberyCreationForm"<< std::endl;
    this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "Constructor called for ShrubberyCreationForm"<< std::endl;
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor called for ShrubberyCreationForm"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& old) {
    std::cout << "Copy constructor called for ShrubberyCreationForm"<< std::endl;
    *this = old;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& old) {
    std::cout << "Assignment operator called for ShrubberyCreationForm" << std::endl;
    if (this != &old) {
        this->target = old.target;
    }
    return *this;
}


void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if ((this->getSigned() == 0) || ( executor.getGrade() > this->getExecGrade()))
        throw ShrubberyCreationForm::GradeTooLowException();
    else
    {
        std::string new_filename = this->target + "_shrubbery";
	    std::ofstream ofs(new_filename.c_str());
        if (!ofs.is_open())
	    {
	    	std::cout << "Error: could not create output file" << std::endl;
            return ; 
	    }
        ofs << "       _-_" << std::endl;
        ofs << "    /~~   ~~\\" << std::endl;
        ofs << " /~~         ~~\\" << std::endl;
        ofs << "{               }" << std::endl;
        ofs << " \\  _-     -_  /" << std::endl;
        ofs << "   ~  \\\\ //  ~" << std::endl;
        ofs << "_- -   | | _- _" << std::endl;
        ofs << "  _ -  | |   -_" << std::endl;
        ofs << "      // \\\\" << std::endl;
        ofs << "     //   \\\\" << std::endl;
        ofs << "    //     \\\\" << std::endl;
        ofs << "   //       \\\\" << std::endl;
        ofs << std::endl;
        ofs.close();
    }
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->target;
}