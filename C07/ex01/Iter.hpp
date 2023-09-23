/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:46:43 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/23 10:59:03 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Iter_HPP
# define Iter_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int len, void (*f)(T const &))
{
	int i = 0;
	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}

template <typename T>
void print(T x)
{
	std::cout << x << std::endl;
}

#endif