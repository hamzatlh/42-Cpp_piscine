/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 08:49:32 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/18 20:00:14 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	private :
		int value;
		static const int bits = 8;
	public :
		Fixed();
		Fixed(const Fixed& old);
		~Fixed();
		Fixed& operator=(const Fixed& old);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif