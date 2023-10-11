/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:40 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/11 13:30:29 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main()
{
	std::deque<int> d;
	d.push_back(5);
	d.push_back(2);
	d.push_back(8);
	d.push_back(4);
	d.push_back(0);
	d.push_back(6);
	d.push_back(9);
	d.push_back(7);

	std::deque<std::pair<std::deque<int>, std::deque<int> > > pairs;
	
	split_deque_into_pairs(d, pairs);

	for (std::deque<std::pair<std::deque<int>, std::deque<int> > >::iterator it = pairs.begin(); it != pairs.end(); ++it)
	{
		std::cout << "[" << it->first.front() << ", " << it->second.front() << "]" << std::endl;
	}
	return 0;
}
