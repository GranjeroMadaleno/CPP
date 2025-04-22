/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:17:48 by andefern          #+#    #+#             */
/*   Updated: 2025/04/06 14:28:13 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	num = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = other;
}

Fixed& Fixed::operator = (const Fixed& other)
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
