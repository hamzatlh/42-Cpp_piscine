/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:17:09 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/23 17:49:26 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int comp = 0;

int isInt(std::string str)
{
	int i = 0;
    char *end;
    double j = strtod(str.c_str(), &end);
	if(j > INT_MAX || j < INT_MIN)
		return (0);
	if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}


bool Compare(const std::deque<int>& d1, const std::deque<int>& d2)
{
    return (d1.back() <= d2.back());
}


bool Compare2(const std::vector<int>& v1, const std::vector<int>& v2)
{
    return (v1.back() <= v2.back());
}

int jacobsthal(int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    return (jacobsthal(n - 1) + 2 * jacobsthal(n - 2));
}
void split_deque_into_pairs(std::deque<int>& d, size_t size)
{
    if (d.size() < size * 2)
        return;
    std::deque<std::pair<std::deque<int>, std::deque<int> > > pairs;
    std::deque<int> tmp;
    if (d.size() % (size * 2) != 0)
    {
        for (size_t i = d.size() - (d.size() % (size * 2)); i < d.size(); i++)
            tmp.push_back(d[i]);
        d.erase(d.end() - (d.size() % (size * 2)), d.end());
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
            {
                std::swap(first_deque, second_deque);
            }
        }
        pairs.push_back(std::make_pair(first_deque, second_deque));
    }
    d.clear();
    for (size_t i = 0; i < pairs.size(); i++)
    {
        std::deque<int>& first_subdeque = pairs[i].first;
        std::deque<int>& second_subdeque = pairs[i].second;
        for (size_t j = 0; j < size; j++)
            d.push_back(first_subdeque[j]);
        for (size_t j = 0; j < size; j++)
            d.push_back(second_subdeque[j]);
    }
    split_deque_into_pairs(d, size * 2);
    pairs.clear();
    std::deque<std::deque<int> > main_chain;
    std::deque<std::deque<int> > pend_chain;
    std::deque<int> jacob_arr;
    for (size_t i = 0; i < d.size(); i += size * 2)
    {
        if (size > d.size() - i)
        {
            std::deque<int> first_deque;
            std::deque<int> second_deque;
            for (size_t j = i; j < d.size(); j++)
            {
                if (j < i + size)
                    first_deque.push_back(d[j]);
                else
                    second_deque.push_back(d[j]);
            }
            pairs.push_back(std::make_pair(first_deque, second_deque));
        }
        else
        {
            std::deque<int> first_deque;
            std::deque<int> second_deque;
            for (size_t j = i; j < i + size; j++)
                first_deque.push_back(d[j]);
            for (size_t j = i + size; j < i + size * 2; j++)
                second_deque.push_back(d[j]);
            pairs.push_back(std::make_pair(first_deque, second_deque));
        }
        main_chain.push_back(pairs.back().second);
        pend_chain.push_back(pairs.back().first);
    }
    if (!pend_chain.empty())
        main_chain.push_front(pend_chain.front());
    if (pend_chain.size() >= 2)
    {
        std::deque<std::deque<int> >::iterator it = std::lower_bound(main_chain.begin(), main_chain.begin() + 2, pend_chain[1], Compare);
        main_chain.insert(it, pend_chain[1]);
    }
    for(size_t i = 3; i <= pend_chain.size(); i++)
    {
        int j = jacobsthal(i);
		if(j >= (int)(pend_chain.size()))
		{
			jacob_arr.push_back(pend_chain.size() - 1);
			break;
		}
		else
			jacob_arr.push_back(jacobsthal(i));
    }
    int start = 2;
    for(size_t i = 0; i < jacob_arr.size();)
    {
        int j = jacob_arr.at(i);
        if (j >= (int)pend_chain.size())
            j = pend_chain.size() - 1;
        int tmp = j;
        while (j >= start)
        {
            std::deque<std::deque<int> >::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), pend_chain[j], Compare);
            main_chain.insert(it, pend_chain[j]);
            j--;
        }
        start = tmp + 1;
        i++;
    }
    if (!tmp.empty())
    {
        std::deque<std::deque<int> >::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), tmp, Compare);
        main_chain.insert(it, tmp);
    }
    d.clear();
    for (std::deque<std::deque<int> >::iterator it = main_chain.begin(); it != main_chain.end(); ++it)
        d.insert(d.end(), it->begin(), it->end());
}


void split_vector_into_pairs(std::vector<int>& v, size_t size)
{
    if (v.size() < size * 2)
        return;
    std::vector<std::pair<std::vector<int>, std::vector<int> > > pairs;
    std::vector<int> tmp;
    if (v.size() % (size * 2) != 0)
    {
        for (size_t i = v.size() - (v.size() % (size * 2)); i < v.size(); i++)
            tmp.push_back(v[i]);
        v.erase(v.end() - (v.size() % (size * 2)), v.end());
    }
    for (size_t i = 0; i < v.size(); i += size * 2)
    {
        std::vector<int> first_vector;
        std::vector<int> second_vector;
        if (v.size() - i < size * 2)
        {
            for (size_t j = i; j < v.size(); j++)
            {
                if (j < i + size)
                    first_vector.push_back(v[j]);
                else
                    second_vector.push_back(v[j]);
            }
        }
        else
        {
            for (size_t j = i; j < i + size; j++)
                first_vector.push_back(v[j]);
            for (size_t j = i + size; j < i + size * 2; j++)
                second_vector.push_back(v[j]);
            comp++;
            if (first_vector.back() > second_vector.back())
            {
                std::swap(first_vector, second_vector);
            }
        }
        pairs.push_back(std::make_pair(first_vector, second_vector));
    }
    v.clear();
    for (size_t i = 0; i < pairs.size(); i++)
    {
        std::vector<int>& first_subvector = pairs[i].first;
        std::vector<int>& second_subvector = pairs[i].second;
        for (size_t j = 0; j < size; j++)
            v.push_back(first_subvector[j]);
        for (size_t j = 0; j < size; j++)
            v.push_back(second_subvector[j]);
    }
    split_vector_into_pairs(v, size * 2);
    pairs.clear();
    std::vector<std::vector<int> > main_chain;
    std::vector<std::vector<int> > pend_chain;
    std::vector<int> jacob_arr;
    for (size_t i = 0; i < v.size(); i += size * 2)
    {
        if (size > v.size() - i)
        {
            std::vector<int> first_vector;
            std::vector<int> second_vector;
            for (size_t j = i; j < v.size(); j++)
            {
                if (j < i + size)
                    first_vector.push_back(v[j]);
                else
                    second_vector.push_back(v[j]);
            }
            pairs.push_back(std::make_pair(first_vector, second_vector));
        }
        else
        {
            std::vector<int> first_vector;
            std::vector<int> second_vector;
            for (size_t j = i; j < i + size; j++)
                first_vector.push_back(v[j]);
            for (size_t j = i + size; j < i + size * 2; j++)
                second_vector.push_back(v[j]);
            pairs.push_back(std::make_pair(first_vector, second_vector));
        }
        main_chain.push_back(pairs.back().second);
        pend_chain.push_back(pairs.back().first);
    }
    if (!pend_chain.empty())
        main_chain.insert(main_chain.begin(), pend_chain.front());
    if (pend_chain.size() >= 2)
    {
        std::vector<std::vector<int> >::iterator it = std::lower_bound(main_chain.begin(), main_chain.begin() + 2, pend_chain[1], Compare2);
        main_chain.insert(it, pend_chain[1]);
    }
    for(size_t i = 3; i <= pend_chain.size(); i++)
    {
        int j = jacobsthal(i);
        if(j >= (int)(pend_chain.size()))
        {
            jacob_arr.push_back(pend_chain.size() - 1);
            break;
        }
        else
            jacob_arr.push_back(jacobsthal(i));
    }
    int start = 2;
    for(size_t i = 0; i < jacob_arr.size();)
    {
        int j = jacob_arr.at(i);
        if (j >= (int)pend_chain.size())
            j = pend_chain.size() - 1;
        int tmp = j;
        while (j >= start)
        {
            std::vector<std::vector<int> >::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), pend_chain[j], Compare2);
            main_chain.insert(it, pend_chain[j]);
            j--;
        }
        start = tmp + 1;
        i++;
    }
    if (!tmp.empty())
    {
        std::vector<std::vector<int> >::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), tmp, Compare2);
        main_chain.insert(it, tmp);
    }
    v.clear();
    for (std::vector<std::vector<int> >::iterator it = main_chain.begin(); it != main_chain.end(); ++it)
        v.insert(v.end(), it->begin(), it->end());
}