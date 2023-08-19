/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:52:17 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/19 20:25:16 by htalhaou         ###   ########.fr       */
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
};
std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif