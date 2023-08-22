/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:52:33 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/21 13:50:23 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& old)
{
	std::cout << "Copy constructor called" << std::endl;
	*this=old;
}
Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& old)
{
	std::cout << "copy assignement called" << std::endl;
	this->value = old.getRawBits();
	return (*this);
}


int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed::Fixed(const int f)
{
	std::cout << "int constructor called" << std::endl;
	this->value = f * 256;
}

Fixed::Fixed(const float n)
{
	std::cout << "float constructor called" << std::endl;
	this->value = roundf(n * 256);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / 256);
}

int Fixed::toInt(void) const
{
	return (this->value / 256);
}


std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

