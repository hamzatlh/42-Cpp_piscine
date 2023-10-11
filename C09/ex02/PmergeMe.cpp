/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:56 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/11 13:32:42 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void split_deque_into_pairs(const std::deque<int>& d, std::deque<std::pair<std::deque<int>, std::deque<int> > >& pairs)
{
	std::deque<int> tmp;

	if (d.size() % 2 != 0)
	{
		tmp.push_back(d.back());
		std::cout << "==> tmp : " << tmp.back() << std::endl;
	}

	for (size_t i = 0; i < d.size() - 1; i += 2)
	{
		std::deque<int> first_deque;
		std::deque<int> second_deque;

		if (d[i + 1] < d[i])
		{
			first_deque.push_back(d[i + 1]);
			second_deque.push_back(d[i]);
		}
		else
		{
			first_deque.push_back(d[i]);
			second_deque.push_back(d[i + 1]);
		}
		pairs.push_back(std::make_pair(first_deque, second_deque));
	}
}


// void split_deque_into_pairs(const std::deque<int>& d, std::deque<std::pair<int, std::deque<int> > > &pairs)
// {
// 	std::deque<int> tmp;
// 	if (d.size() % 2 != 0)
// 	{
// 		tmp.push_back(d.back());
// 		std::cout << "==> tmp : " << tmp.back() << std::endl;
// 		// d.pop_back();
// 	}
// 	for (size_t i = 0; i < d.size() - 1; i += 2)
// 	{
// 		std::deque<int> sub_deque;
// 		if (d[i] > d[i + 1])
// 		{
// 			sub_deque.push_back(d[i + 1]);
// 			sub_deque.push_back(d[i]);
// 			pairs.push_back(std::make_pair(d[i + 1], sub_deque));
// 		}
// 		else
// 		{
// 			sub_deque.push_back(d[i]);
// 			sub_deque.push_back(d[i + 1]);
// 			pairs.push_back(std::make_pair(d[i], sub_deque));
// 		}
// 	}
// }