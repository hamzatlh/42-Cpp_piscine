/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:56 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/14 20:01:50 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void split_deque_into_pairs(std::deque<int>& d, size_t size)
{
    if (d.size() < size * 2)
        return;
    std::deque<std::pair<std::deque<int>, std::deque<int> > > pairs;
    std::deque<int> tmp;

    if (d.size() % (size * 2) != 0)
    {
        tmp.push_back(d.back());
        std::cout << "==> tmp : " << tmp.back() << std::endl;
        d.pop_back();
    }
    for (size_t i = 0; i < d.size(); i += size * 2)
    {
        std::deque<int> first_deque;
        std::deque<int> second_deque;
        if (d.size() - i < size * 2)
        {
            for (size_t j = i; j < d.size(); j++)
            {
                if (j < i + size)
                    first_deque.push_back(d[j]);
                else
                    second_deque.push_back(d[j]);
            }
        }
        else
        {
            for (size_t j = i; j < i + size; j++)
                first_deque.push_back(d[j]);
            for (size_t j = i + size; j < i + size * 2; j++)
                second_deque.push_back(d[j]);
            if (first_deque.back() > second_deque.back())
                std::swap(first_deque, second_deque);
        }
        pairs.push_back(std::make_pair(first_deque, second_deque));
    }
    d.clear();
    for (size_t i = 0; i < pairs.size(); i++)
    {
        std::deque<int>& first_subdeque = pairs[i].first;
        std::deque<int>& second_subdeque = pairs[i].second;
        for (size_t j = 0; j < size; j++)
        {
            d.push_back(first_subdeque[j]);
        }
        for (size_t j = 0; j < size; j++)
        {
            d.push_back(second_subdeque[j]);
        }
    }
	std::cout << "==> pairs in " << size << std::endl;
	for (std::deque<std::pair<std::deque<int>, std::deque<int> > >::iterator it = pairs.begin(); it != pairs.end(); ++it)
	{
		for(std::deque<int>::iterator it2 = it->first.begin(); it2 != it->first.end(); ++it2)
			std::cout << *it2 << " ";
		std::cout << " , ";
		for(std::deque<int>::iterator it2 = it->second.begin(); it2 != it->second.end(); ++it2)
			std::cout << *it2 << " ";
		std::cout << std::endl;
	}
    size *= 2;
    split_deque_into_pairs(d, size);
}