/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:53:11 by andefern          #+#    #+#             */
/*   Updated: 2025/04/24 13:27:11 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	num = 0;
}
Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << std::endl;
	num = roundf(value * (1 << bit));
}
Fixed::Fixed(float value)
{
	std::cout << "Float constructor called" << std::endl;
	num = roundf(value * (1 << bit));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &other)
		num = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

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
	return (float)this->num / (1 << bit);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &number)
{
	out << number.toFloat();
	return (out);
}
