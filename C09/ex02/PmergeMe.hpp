/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:21:03 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/14 13:02:05 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>

void split_deque_into_pairs(std::deque<int>& d, size_t size);
void merge_the_subarrays(std::deque<std::pair<std::deque<int>, std::deque<int> > >& pairs, size_t size);
#endif