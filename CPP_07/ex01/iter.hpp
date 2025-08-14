/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:08:04 by andefern          #+#    #+#             */
/*   Updated: 2025/08/14 12:33:35 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <typeinfo>
#include <iostream>

template <typename T>
	void	iter(T array[], size_t length, void (*function)(T const &)) {
		for (size_t i = 0; i < length; i++)
			function(array[i]);
}

template <typename T>
	void	print_value(T val) {
		std::cout << val << std::endl;
}