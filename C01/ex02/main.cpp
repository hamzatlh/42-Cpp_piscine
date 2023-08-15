/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:47:06 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/15 12:58:33 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of str : " << " " <<&str << std::endl;
	std::cout << "The memory address of ptr : " << " " << stringPTR << std::endl;
	std::cout << "The memory address of ref : " << " "<< &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "The value of the string : " << " "<< str << std::endl;
	std::cout << "The value pointed to by stringPTR : " << " " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << " " << stringREF << std::endl;
	
	return (0);
}
