/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:17:51 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/11 10:24:42 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
	private :
		const std::string name;
		bool Signed;
		const int gradeToSign;
		const int gradeToExecute;
	public :
		Form();
		~Form();
		Form& operator=(const Form& old);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form& old);
		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExucute() const;
		class GradeTooHighException : public std::exception{
			public :
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public :
				const char* what() const throw();
		};
		void beSigned(Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif