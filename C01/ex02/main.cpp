/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:47:06 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/11 16:33:23 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "address of str : " << " " <<&str << std::endl;
	std::cout << "address of ptr : " << " " << ptr << std::endl;
	std::cout << "address of ref : " << " "<< &ref << std::endl;
	std::cout << std::endl;

	std::cout << "The value of the string : " << " "<< str << std::endl;
	std::cout << "The value pointed to by stringPTR : " << " " << *ptr << std::endl;
	std::cout << "The value pointed to by stringREF : " << " " << ref << std::endl;
	
	return (0);
}
