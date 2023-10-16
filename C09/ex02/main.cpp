/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:40 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/16 13:10:50 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av)
{
	std::deque<int> d;
	std::deque<std::pair<std::deque<int>, std::deque<int> > > pairs;

	if (ac < 2)
	{
		std::cout << "Error : please give me a list of integers pleaaaseee" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
		d.push_back(atoi(av[i]));
	std::cout << "==> d : ";
	for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	split_deque_into_pairs(d, 1);
	return (0);
}
