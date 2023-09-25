/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:45:57 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/24 10:33:56 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	return 0;
}

// int main()
// {
// 	Awesome a(2);
// 	Awesome b(3);
// 	::swap(a, b);
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
// 	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
// 	return 0;
// }