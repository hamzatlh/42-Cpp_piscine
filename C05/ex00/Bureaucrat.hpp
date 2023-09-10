/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:11:34 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/10 15:59:17 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat{
	private :
		const std::string name;
		int grade;
	public :
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string name, int Grade);
		Bureaucrat& operator=(const Bureaucrat& old);
		Bureaucrat(const Bureaucrat& old);
		std::string getName() const;
		int getGrade() const;
		class GradeTooHighException : public std::exception{
			public :
				const char* what() const throw(); 
		};
		class GradeTooLowException : public std::exception{
			public :
				const char* what() const throw();
		};
		void incrementGrade();
		void decrementGrade();
		
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif