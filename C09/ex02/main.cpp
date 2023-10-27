/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:40 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/27 17:55:54 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av)
{
	std::deque<int> d;
    std::vector<int> v;
    
	std::deque<std::pair<std::deque<int>, std::deque<int> > > pairs;
    std::vector<std::pair<std::vector<int>, std::vector<int> > > pairs2;
    clock_t timedeque;
    clock_t timevectore;
	if (ac < 2)
	{
		std::cout << "Error : please give us something to sort" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		if (isInt(av[i]))
		{
			d.push_back(atoi(av[i]));
			v.push_back(atoi(av[i]));
		}
		else
		{
			std::cout << "Error : please give me a list of integers pleaaaseee" << std::endl;
			return (0);
		}
	}
	std::cout << "before : ";
	for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	timedeque = clock();
    split_deque_into_pairs(d, 1);
    timedeque = clock() - timedeque;
    timevectore = clock();
    split_vector_into_pairs(v, 1);
    timevectore = clock() - timevectore;
	std::cout << std::endl;
    std::cout << "after : ";
    for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << static_cast<float>(timedeque) * 1000000 / CLOCKS_PER_SEC << " us" << std::endl;
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector   : " << static_cast<float>(timevectore) * 1000000 / CLOCKS_PER_SEC << " us" << std::endl;
	return (0);
}