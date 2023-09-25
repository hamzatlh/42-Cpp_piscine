/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:46:43 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/24 10:33:40 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

// class Awesome{
// 	public:
// 		Awesome( int n ) : _n( n ) {}
// 		Awesome() : _n( 0 ) {}
// 		Awesome & operator=( Awesome const & rhs ) { this->_n = rhs._n; return *this; }
// 		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// 		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
// 		bool operator>( Awesome const & rhs ) const{ return (this->_n > rhs._n); }
// 		bool operator<( Awesome const & rhs ) const{ return (this->_n < rhs._n); }
// 		bool operator>=( Awesome const & rhs ) const{ return (this->_n >= rhs._n); }
// 		bool operator<=( Awesome const & rhs ) const{ return (this->_n <= rhs._n); }
// 		int getN() const { return this->_n; }
// 	private:
// 		int _n;
// };
// std::ostream & operator<<(std::ostream & o, Awesome const & rhs) { o << rhs.getN(); return o; }

#endif