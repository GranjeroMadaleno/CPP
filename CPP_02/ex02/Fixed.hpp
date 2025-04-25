/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:16:16 by andefern          #+#    #+#             */
/*   Updated: 2025/04/22 14:42:28 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class	Fixed
{
	private:
	
		int 				num;
		static const int	bit = 8;

	public:

		Fixed();
		Fixed(int value);
		Fixed(float value);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float 	toFloat(void) const;

		bool	operator>(const Fixed &comparation);
		bool	operator<(const Fixed &comparation);
		bool	operator>=(const Fixed &comparation);
		bool	operator<=(const Fixed &comparation);
		bool	operator==(const Fixed &comparation);
		bool	operator!=(const Fixed &comparation);

		Fixed	&operator+(const Fixed &comparation);
		Fixed	&operator-(const Fixed &comparation);
		Fixed	&operator*(const Fixed &comparation);
		Fixed	&operator/(const Fixed &comparation);

		Fixed 	operator++();
		Fixed 	operator++(int sum);
		Fixed 	operator--();
		Fixed 	operator--(int res);
		
		static Fixed &min(Fixed &first, Fixed &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static Fixed &min(const Fixed &first, const Fixed &second);
		static Fixed &max(const Fixed &first, const Fixed &second);
		
};

	std::ostream	&operator<<(std::ostream &out, const Fixed &number);

#endif
