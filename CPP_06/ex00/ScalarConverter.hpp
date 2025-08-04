/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:56:46 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 12:03:31 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cerrno>
#include <limits>
#include <cmath>

class ScalarConverter
{
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &copy);
	ScalarConverter &operator= (const ScalarConverter &other);
	~ScalarConverter();

	static void	convert(std::string literal);
};

enum
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

#endif