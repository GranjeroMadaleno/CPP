/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:16:19 by andefern          #+#    #+#             */
/*   Updated: 2025/04/24 13:35:19 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	num = 0;
}
Fixed::Fixed(int value)
{
	num = roundf(value * (1 << bit));
}
Fixed::Fixed(float value)
{
	num = roundf(value * (1 << bit));
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		num = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits(void) const
{
	return (num);
}

void	Fixed::setRawBits(int const raw)
{
	num = raw;
}

int		Fixed::toInt(void) const
{
	return ((int)(num  / (1 << bit)));
}

float		Fixed::toFloat(void) const
{
	return (roundf(this->num ) / (1 << bit));
}

std::ostream	&operator<<(std::ostream &out, const Fixed &number)
{
	out << number.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed &comparation)
{
	if (num > comparation.num)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &comparation)
{
	if (num < comparation.num)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &comparation)
{
	if (num >= comparation.num)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &comparation)
{
	if (num <= comparation.num)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &comparation)
{
	if (num == comparation.num)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &comparation)
{
	if (num != comparation.num)
		return (true);
	return (false);
}

Fixed	&Fixed::operator+(const Fixed &comparation){
	num += comparation.num;
	return (*this);
}

Fixed	&Fixed::operator-(const Fixed &comparation){
	num -= comparation.num;
	return (*this);
}

Fixed	&Fixed::operator*(const Fixed &comparation){
	num *= (comparation.num >> bit);
	return (*this);
}

Fixed	&Fixed::operator/(const Fixed &comparation){
	num /= (comparation.num >> bit);
	return (*this);
}

Fixed	Fixed::operator++() 
{
	++num;
	return *this;
}

Fixed	Fixed::operator++(int) 
{
	Fixed	temp(*this);
	++num;
	return (temp);
}

Fixed	Fixed::operator--() 
{
	--num;
	return (*this);
}

Fixed	Fixed::operator--(int) 
{
	Fixed	temp(*this);
	--num;
	return (temp);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first.num <= second.num)
		return (first);
	return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first.num >= second.num)
		return (first);
	return (second);
}

Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.num <= second.num)
		return ((Fixed &) first);
	return ((Fixed &) second);
}

Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.num >= second.num)
		return ((Fixed &) first);
	return ((Fixed &) second);
}

