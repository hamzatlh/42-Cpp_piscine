/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:11:50 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/04 15:03:07 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
	private:
		T *arr;
		unsigned int len;
	public:
		Array<T>(void)
		{
			this->arr = new T;
			this->len = 0;
		}
		Array<T>(unsigned int n)
		{
			this->arr = new T[n];
			this->len = n;
		}
		Array<T>(Array<T> const& old)
		{
			this->arr = new T;
			*this = old;
		}
		Array<T>& operator=(Array<T> const& old)
		{
			if (this->arr)
				delete [] this->arr;
			this->arr = new T[old.len];
			this->len = old.len;
			for (unsigned int i = 0; i < old.len; i++)
				this->arr[i] = old.arr[i];
			return (*this);
		}
		T& operator[](unsigned int i)
		{
			if (i >= this->len)
				throw std::out_of_range("out of range");
			return (this->arr[i]);
		}
		unsigned int size(void) const
		{
			return (this->len);
		}
		~Array<T>(void)
		{
			if (this->arr)
				delete [] this->arr;
		}
};

#endif