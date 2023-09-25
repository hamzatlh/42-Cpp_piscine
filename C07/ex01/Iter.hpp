/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:46:43 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/24 11:49:58 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Iter_HPP
# define Iter_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int len, void (*f)(T const&))
{
	int i = 0;
	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}
template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
}
// class Awesome{
// 	public:
// 		Awesome() : _n(42) {}
// 		int get() const { return this->_n; }
// 	private:
// 		int _n;
// };
// std::ostream & operator<<(std::ostream & o, Awesome const & rhs) { o << rhs.get(); return o; }

#endif