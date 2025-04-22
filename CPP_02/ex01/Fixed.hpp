/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:53:18 by andefern          #+#    #+#             */
/*   Updated: 2025/04/22 12:10:46 by andefern         ###   ########.fr       */
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

		//int 	operator+(Fixed other) const;
};

	std::ostream	&operator<<(std::ostream &out, const Fixed &number);

#endif
