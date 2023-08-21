/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:52:01 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/21 12:58:33 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const Fixed& old)
{
	*this=old;
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& old)
{
	this->value = old.getRawBits();
	return (*this);
}


int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed::Fixed(const int f)
{
	this->value = f * 256;
}

Fixed::Fixed(const float n)
{
	// std::cout << "float constructor called" << std::endl;
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

//comparison operators

bool Fixed::operator>(const Fixed &fixed)
{
	if (this->toFloat() > fixed.toFloat())
		return (1);
	else
		return (0);
}

bool Fixed::operator<(const Fixed &fixed)
{
	if (this->toFloat() < fixed.toFloat())
		return (1);
	else
		return (0);
}

bool Fixed::operator>=(const Fixed &fixed)
{
	if (this->toFloat() >= fixed.toFloat())
		return (1);
	else
		return (0);
}

bool Fixed::operator<=(const Fixed &fixed)
{
	if (this->toFloat() >= fixed.toFloat())
		return (1);
	else
		return (0);
}

bool Fixed::operator==(const Fixed &fixed)
{
	if (this->toFloat() == fixed.toFloat())
		return (1);
	else
		return (0);
}

bool Fixed::operator!=(const Fixed &fixed)
{
	if (this->toFloat() != fixed.toFloat())
		return (1);
	else
		return (0);
}

//arithmetic operators

Fixed Fixed::operator+(const Fixed &fixed)
{
	Fixed newFixed;
	newFixed.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (newFixed);
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	Fixed newFixed;
	newFixed.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (newFixed);
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	Fixed newFixed;
	newFixed.setRawBits(this->value * fixed.getRawBits() / 256);
	return (newFixed);
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	Fixed newFixed;
	newFixed.setRawBits(this->value * 256 / fixed.getRawBits());
	return (newFixed);
}

//overloaded member functions

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1.toFloat() < fixed2.toFloat())
		return (fixed1);
	else
		return (fixed2);
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1.toFloat() > fixed2.toFloat())
		return (fixed1);
	else
		return (fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.toFloat() < fixed2.toFloat())
		return (fixed1);
	else
		return (fixed2);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.toFloat() > fixed2.toFloat())
		return (fixed1);
	else
		return (fixed2);
}

//increment/decrement

Fixed& Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed newFixed(*this);
	this->value++;
	return (newFixed);
}

Fixed Fixed::operator--(int)
{
	Fixed newFixed(*this);
	this->value--;
	return (newFixed);
}
