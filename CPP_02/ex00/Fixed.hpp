/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:17:46 by andefern          #+#    #+#             */
/*   Updated: 2025/04/06 14:23:29 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
	
		int 				num;
		static const int	bit = 8;

	public:

		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif