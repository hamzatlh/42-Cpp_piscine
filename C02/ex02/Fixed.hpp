/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:52:09 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/13 15:05:19 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <iomanip>
# include <cmath>
# include <string>
# include <fstream>

class Fixed
{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const int f);
		Fixed(const float n);
		Fixed(const Fixed &old);
		Fixed &operator=(const Fixed &old);
		~Fixed();
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator>(const Fixed &fixed);
		bool operator<(const Fixed &fixed);
		bool operator>=(const Fixed &fixed);
		bool operator<=(const Fixed &fixed);
		bool operator==(const Fixed &fixed);
		bool operator!=(const Fixed &fixed);
		Fixed operator+(const Fixed &fixed);
		Fixed operator-(const Fixed &fixed);
		Fixed operator*(const Fixed &fixed);
		Fixed operator/(const Fixed &fixed);
		static Fixed &min(Fixed &fixed1, Fixed &fixed2);
		static Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
		static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
};
std::ostream& operator<<(std::ostream& os, const Fixed& f);
#endif
