/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:08:04 by andefern          #+#    #+#             */
/*   Updated: 2025/08/05 11:08:06 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>

template <typename T>
void	iter(T array[], size_t length, void (*function)(T const &)) {
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

template <typename T>
void	printvalue(T val) {
	std::cout << val << std::endl;
}