/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:29:06 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/01 13:28:45 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	try
	{
		// std::cout << *easyfind(v, 0) << std::endl;
		std::cout << *easyfind(v, 1) << std::endl;
		std::cout << *easyfind(v, 2) << std::endl;
		std::cout << *easyfind(v, 3) << std::endl;
		// std::cout << *easyfind(v, 4) << st d::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
