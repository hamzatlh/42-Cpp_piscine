/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:11:04 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/10 16:02:22 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("hassan", 1);
		std::cout << b;
		b.incrementGrade();
		std::cout << b << std::endl;
		// std::cout << b << std::endl;
		// b.incrementGrade();
		// std::cout << b << std::endl;
		// b.incrementGrade();
		// std::cout << b << std::endl;
		// b.decrementGrade();
		// std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}