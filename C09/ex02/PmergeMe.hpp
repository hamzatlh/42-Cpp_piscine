/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:21:03 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/12 20:20:27 by htalhaou         ###   ########.fr       */
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

void split_deque_into_pairs(std::deque<int>& d, std::deque<std::pair<std::deque<int>, std::deque<int> > >& pairs);
void recusive_sort_pairs(std::deque<std::pair<std::deque<int>, std::deque<int> > >& pairs);
void insert(std::deque<std::pair<std::deque<int>, std::deque<int> > >& pairs, std::pair<std::deque<int>, std::deque<int> > pair_to_insert);
#endif