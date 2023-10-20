/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:40 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/20 12:24:45 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// int main (int ac, char **av)
// {
// 	std::deque<int> d;
// 	std::deque<std::pair<std::deque<int>, std::deque<int> > > pairs;

// 	if (ac < 2)
// 	{
// 		std::cout << "Error : please give me a list of integers pleaaaseee" << std::endl;
// 		return (0);
// 	}
// 	for (int i = 1; i < ac; i++)
// 		d.push_back(atoi(av[i]));
// 	std::cout << "==> d : ";
// 	for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
// 		std::cout << *it << " ";
// 	std::cout << std::endl;
// 	split_deque_into_pairs(d, 1);

// 	std::cout << "comp :  " << comp << std::endl;
// 	return (0);
// }

// std::vector<int> jacobsthal_arr = Jacobsthal(pend_chain.size());
//     for (std::deque<std::deque<int> >::iterator p_it = jacobsthal_arr.back() > main_chain.size() ? pend_chain.begin() : pend_chain.end() - jacobsthal_arr.back(); p_it != pend_chain.end(); ++p_it)
//     {
//         std::deque<std::deque<int> >::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), *p_it, Compare);
//         main_chain.insert(it, *p_it);
//     }

// std::vector<int> Jacobsthal(int n)
// {
//     std::vector<int> arr(n);
//     if (n == 0)
//         return arr;
//     if (n == 1)
//     {
//         arr[0] = 1;
//         return (arr);
//     }
//     arr[0] = 0;
//     arr[1] = 1;
//     for (int i = 2; i < n; i++)
//     {
//         arr[i] = arr[i - 1] + 2 * arr[i - 2];
//     }
//     return (arr);
// }