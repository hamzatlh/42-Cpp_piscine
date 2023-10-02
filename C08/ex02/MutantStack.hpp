/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:43:03 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/02 10:41:34 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>
#include <deque>
#include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>()
		{
		}
		MutantStack(MutantStack const& src) : std::stack<T>()
		{
			*this = src;
		}
		MutantStack& operator=(MutantStack const& src)
		{
			if (this != &src)
			{
			}	
			return (*this);
		}
		~MutantStack()
		{
		}
		typedef typename Container::iterator iterator;
		iterator begin()
		{
			return (std::stack<T>::c.begin());
		}
		iterator end()
		{
			return (std::stack<T>::c.end());
		}
};
#endif