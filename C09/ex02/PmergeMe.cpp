/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:56 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/12 20:20:37 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void split_deque_into_pairs(std::deque<int>& d, std::deque<std::pair<std::deque<int>, std::deque<int> > >& pairs)
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
void recusive_sort_pairs(std::deque<std::pair<std::deque<int>, std::deque<int> > >& pairs)
{
	if (pairs.size() <= 1)
		return ;
	std::pair<std::deque<int>, std::deque<int> > last_pair = pairs.back();
	pairs.pop_back();
	std::cout << "==> last_pair : [" << last_pair.first.front() << ", " << last_pair.second.front() << "]" << std::endl;

	recusive_sort_pairs(pairs);
	insert(pairs, last_pair);
}

void insert(std::deque<std::pair<std::deque<int>, std::deque<int> > >& pairs, std::pair<std::deque<int>, std::deque<int> > pair_to_insert)
{
	if (pairs.empty() || pair_to_insert.second.back() >= pairs.back().second.back())
	{
		pairs.push_back(pair_to_insert);
		return;
	}
	std::pair<std::deque<int>, std::deque<int> > last_pair = pairs.back();
	pairs.pop_back();
	insert(pairs, pair_to_insert);
	pairs.push_back(last_pair);
}
